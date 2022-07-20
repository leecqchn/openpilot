
#include "Cart2Frnt.h"

/*
This file will output the input point states in Frenet coordinate according to 
the input states in Cartesian coordinate.

Inputs:
Cartesian Inputs States (x,y,vx,vy,ay,theta)
Reference Line Parameters(A0,A1,A2,A3,Rng) whose equation is Y = A0 + A1*X + A2*X^2 + A3*X^3
where 0 <= X <= Rng

Outputs:
Frenet Outputs States(l,s,dl,ds,ddl,dds)

This file includes 6 External basic functions.which show as below:
Cart_Sign,Cart_DotProduct
Cart_Y,Cart_rho
Cart_ProjectPoint_X,Cart_ProjectPoint_Y

And includes 6 Internal functional functions,which calculate (l,s,dl,ds,ddl,dds) respectively and shows as blow:
Frnt_l,Frnt_s
Frnt_dl,Frnt_ds
Frnt_ddl,Frnt_dds
*/

// /////////////////////////// Internal 6 Functional Functions ///////////////////////////////////////
float Cart_Sign(float C);
float Cart_DotProduct(float A[],float B[]);
float Cart_Y(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
float Cart_rho(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
float Cart_ProjectPoint_X(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol);
float Cart_ProjectPoint_Y(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol);

float Frnt_s(float X_Prj,float Y_Prj,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,int NmbPnt)
{
	float Step = X_Prj/NmbPnt;
	float LgtD[100];
	float LatD[100];
	float S[100];
	
	LgtD[0] = 0;
	LgtD[0] = 0;
	S[0] = 0;
	
	int i;
	for (i = 1;i <= NmbPnt;i++)
	{
		LgtD[i] = Step*i;
		LatD[i] =Cart_Y(LgtD[i],A0_RefL,A1_RefL,A2_RefL,A3_RefL);
		S[i] = S[i-1] + sqrt(pow(LgtD[i]-LgtD[i-1],2) + pow(LatD[i]-LatD[i-1],2));
	}
	
	return S[NmbPnt];
}

float Frnt_l(float X_In,float Y_In,float X_Prj,float Y_Prj)
{
	float V_PPprjpnt[2];
	V_PPprjpnt[0] = X_Prj - X_In;
	V_PPprjpnt[1] = Y_Prj - Y_In;
	return Cart_Sign(Y_In-Y_Prj)*sqrt(Cart_DotProduct(V_PPprjpnt,V_PPprjpnt));
}

float Frnt_ds(float X_Prj,float Y_Prj,float S,float L,float vx,float theta,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	float rho_rl;
	rho_rl = Cart_rho(X_Prj,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
	return vx*cos(theta)/(1-rho_rl*L);
    // ds = Vx*cos(theta)*R/(R-L);
}

float Frnt_dl(float X_Prj,float Y_Prj,float S,float L,float vx,float theta,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	float rho_rl;
	rho_rl = Cart_rho(X_Prj,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
	return tan(theta)*(1-rho_rl*L);
    // dl = Vx*sin(theta)/(Vx*cos(theta)/(1-rho_rl*L);
}

float Frnt_dds(float X_Prj,float Y_Prj,float S,float L,float dS,float dL,float vx,float theta,float ay,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	float rho_v,rho_rl,Num,Den,dds;
	
	if(vx <= 1)
	{
		rho_v = 0;
	}
	else
	{
		rho_v = ay/vx/vx;
	}
	
	rho_rl = Cart_rho(X_Prj,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
	
	Num = ay*cos(theta) - pow(dS,2) * ( tan(theta)*(1-rho_rl*L)* ((1-rho_rl*L)/cos(theta)*rho_v-rho_rl)-(0+rho_rl*dL) );
	Den = 1-rho_rl*L;
	
	dds = Num/Den;
	
	return dds;
	
	//dds = NUM/DEN;
	//NUM = ay*cos(theta) - dS^2 * ( tan(theta)*(1-rho_rl*L)* ((1-rho_rl*L)/cos(theta)*rho_v-rho_rl)-(drho_l+rho_rl*dL) );
	//DEN = 1-rho_rl*L;
	//where order drho_l = 0;
}

float Frnt_ddl(float X_Prj,float Y_Prj,float S,float L,float dS,float dL,float vx,float theta,float ay,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	float rho_v,rho_rl,Tmp,ddl;
	
	Tmp = (1-rho_rl*L)/cos(theta);
	
	if(vx <= 1)
	{
		rho_v = 0;
	}
	else
	{
		rho_v = ay/vx/vx;  // Solution of the Trgt rho;
	}
	
	rho_rl = Cart_rho(X_Prj,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
	
	ddl = -rho_rl*dL*tan(theta) + Tmp/cos(theta)*(rho_v*Tmp - rho_rl);
	
	return ddl;
	// ddl = -(drho_rl*L + rho_rl*dL)*tan(theta) + ((1-rho_rl*L)/cos(theta))/cos(theta)*(rho_v*((1-rho_rl*L)/cos(theta)) - rho_rl);
	// where drho_rl = 0;
}

// //////////////////////////// External 6 Basic Functions /////////////////////////////////////////
float Cart_Sign(float C)
{
	if(C >= 0.000001)
	{
		return 1;
	}
	else if (C <= -0.000001)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

float Cart_Y(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	return (A0_RefL + A1_RefL*X + A2_RefL*pow(X,2) + A3_RefL*pow(X,3));// Reference Line Equation is Y = A0 + A1*X + A2*X^2 + A3*X^3;
}

float Cart_rho(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	float dY,ddY,rho;
	dY = A1_RefL + 2*A2_RefL*X + 3*A3_RefL*pow(X,2);
	ddY = 2*A2_RefL + 6*A3_RefL*X;
	rho = ddY/pow((1+dY*dY),1.5);
	return rho;
}

float Cart_DotProduct(float A[],float B[])
{
	return (A[0]*B[0]+A[1]*B[1]);
}

float Cart_ProjectPoint_X(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol) // Solution of the projection point in Cartesian Coordinate,which is used with stateflow in Simulink;
{
	float XY_Prj[2]; 
	
	float ErrTol = eTol;
	
	float X_Strt = -10,X_End = 100;
	float Y_Strt = Cart_Y(X_Strt,A0_RefL,A1_RefL,A2_RefL,A3_RefL),Y_End = Cart_Y(X_End,A0_RefL,A1_RefL,A2_RefL,A3_RefL);// Initial the Project Point
	
	float V_PPstrt[2] = {X_Strt - X_In,Y_Strt - Y_In};
	float V_PPend[2] = {X_End - X_In,Y_End - Y_In};
	float V_PstrtPend[2] = {X_End - X_Strt,Y_End - Y_Strt};
	
	float DP_PPs_PsPe = Cart_DotProduct(V_PPstrt,V_PstrtPend);
	float DP_PPe_PsPe = Cart_DotProduct(V_PPend,V_PstrtPend);
	
	int i;
    float X_Mid,Y_Mid,V_PPmid[2],V_PmidPstrt[2],V_PendPmid[2];
    
	float DP_PPs_PmPs,DP_PPm_PmPs,DP_PPm_PePm,DP_PPe_PePm;
	
	if (Cart_Sign(DP_PPs_PsPe*DP_PPe_PsPe) < 0)
	{
		for (i = 1;i < 100;i++)
		{
			X_Mid = (X_Strt + X_End)/2;
			Y_Mid = Cart_Y(X_Mid,A0_RefL,A1_RefL,A2_RefL,A3_RefL); // Calculate the middle point
			
			V_PPmid[0] = X_Mid - X_In;
			V_PPmid[1] = Y_Mid - Y_In; // Vector of P_Mid and P;
			
			V_PmidPstrt[0] = X_Strt - X_Mid;
			V_PmidPstrt[1] = Y_Strt - Y_Mid; // Vector of P_Strt and P_Mid;
			
			V_PendPmid[0] = X_Mid - X_End;
			V_PendPmid[1] = Y_Mid - Y_End; // Vector of P_End and P_Mid;
			
			DP_PPs_PmPs = Cart_DotProduct(V_PPstrt,V_PmidPstrt);
			DP_PPm_PmPs = Cart_DotProduct(V_PPmid,V_PmidPstrt);  // Dot Product;
			
			DP_PPe_PePm = Cart_DotProduct(V_PPend,V_PendPmid);
			DP_PPm_PePm = Cart_DotProduct(V_PPmid,V_PendPmid);
			
			if (Cart_Sign(DP_PPs_PmPs*DP_PPm_PmPs)<0 & Cart_Sign(DP_PPm_PePm*DP_PPe_PePm)>0)
			{
				X_End = X_Mid;
				Y_End = Y_Mid;
				V_PPend[0] = V_PPmid[0];
				V_PPend[1] = V_PPmid[1]; // The projection point is between P_Strt and P_Mid;
			}
			else if (Cart_Sign(DP_PPs_PmPs*DP_PPm_PmPs)>0 & Cart_Sign(DP_PPm_PePm*DP_PPe_PePm)<0)
			{
				X_Strt = X_Mid;
				Y_Strt = Y_Mid;
				V_PPstrt[0] = V_PPmid[0];
				V_PPstrt[1] = V_PPmid[1]; // The projection point is between P_Mid and P_End;
			}
			else if (DP_PPs_PmPs == 0)
			{
				XY_Prj[0] = X_Strt;
				XY_Prj[1] = Y_Strt; // The Projection point is P_Strt;
			}
			else if (DP_PPe_PePm == 0)
			{
				XY_Prj[0] = X_End;
				XY_Prj[1] = Y_End; // The Projection point is P_End;
			}
			else
			{
				XY_Prj[0] = X_Mid;
				XY_Prj[1] = Y_Mid;
				break;
			}
			
			if (sqrt(Cart_DotProduct(V_PmidPstrt,V_PmidPstrt)) < ErrTol)
			{
				XY_Prj[0] = X_Mid;
				XY_Prj[1] = Y_Mid;
				break;              // The projection point if near P_Mid within acceptable error ErrTol;
			}
		}  // End of 'For'
		
		return XY_Prj[0];
		
	}      // End of '(Cart_Sign(DP_PPs_PsPe*DP_PPe_PsPe) < 0)'
	else
	{
		XY_Prj[0] = X_In;
		XY_Prj[1] = Cart_Y(X_In,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
		return XY_Prj[0];
	}
}

float Cart_ProjectPoint_Y(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol) // Solution of the projection point in Cartesian Coordinate,which is used with stateflow in Simulink;
{
	float XY_Prj[2]; 
	
	float ErrTol = eTol;
	
	float X_Strt = -10,X_End = 100;
	float Y_Strt = Cart_Y(X_Strt,A0_RefL,A1_RefL,A2_RefL,A3_RefL),Y_End = Cart_Y(X_End,A0_RefL,A1_RefL,A2_RefL,A3_RefL);// Initial the Project Point
	
	float V_PPstrt[2] = {X_Strt - X_In,Y_Strt - Y_In};
	float V_PPend[2] = {X_End - X_In,Y_End - Y_In};
	float V_PstrtPend[2] = {X_End - X_Strt,Y_End - Y_Strt};
	
	float DP_PPs_PsPe = Cart_DotProduct(V_PPstrt,V_PstrtPend);
	float DP_PPe_PsPe = Cart_DotProduct(V_PPend,V_PstrtPend);
	
	int i;
    float X_Mid,Y_Mid,V_PPmid[2],V_PmidPstrt[2],V_PendPmid[2];
    
	float DP_PPs_PmPs,DP_PPm_PmPs,DP_PPm_PePm,DP_PPe_PePm;
	
	if (Cart_Sign(DP_PPs_PsPe*DP_PPe_PsPe) < 0)
	{
		for (i = 1;i < 100;i++)
		{
			X_Mid = (X_Strt + X_End)/2;
			Y_Mid = Cart_Y(X_Mid,A0_RefL,A1_RefL,A2_RefL,A3_RefL); // Calculate the middle point
			
			V_PPmid[0] = X_Mid - X_In;
			V_PPmid[1] = Y_Mid - Y_In; // Vector of P_Mid and P;
			
			V_PmidPstrt[0] = X_Strt - X_Mid;
			V_PmidPstrt[1] = Y_Strt - Y_Mid; // Vector of P_Strt and P_Mid;
			
			V_PendPmid[0] = X_Mid - X_End;
			V_PendPmid[1] = Y_Mid - Y_End; // Vector of P_End and P_Mid;
			
			DP_PPs_PmPs = Cart_DotProduct(V_PPstrt,V_PmidPstrt);
			DP_PPm_PmPs = Cart_DotProduct(V_PPmid,V_PmidPstrt);  // Dot Product;
			
			DP_PPe_PePm = Cart_DotProduct(V_PPend,V_PendPmid);
			DP_PPm_PePm = Cart_DotProduct(V_PPmid,V_PendPmid);
			
			if (Cart_Sign(DP_PPs_PmPs*DP_PPm_PmPs)<0 & Cart_Sign(DP_PPm_PePm*DP_PPe_PePm)>0)
			{
				X_End = X_Mid;
				Y_End = Y_Mid;
				V_PPend[0] = V_PPmid[0];
				V_PPend[1] = V_PPmid[1]; // The projection point is between P_Strt and P_Mid;
			}
			else if (Cart_Sign(DP_PPs_PmPs*DP_PPm_PmPs)>0 & Cart_Sign(DP_PPm_PePm*DP_PPe_PePm)<0)
			{
				X_Strt = X_Mid;
				Y_Strt = Y_Mid;
				V_PPstrt[0] = V_PPmid[0];
				V_PPstrt[1] = V_PPmid[1]; // The projection point is between P_Mid and P_End;
			}
			else if (DP_PPs_PmPs == 0)
			{
				XY_Prj[0] = X_Strt;
				XY_Prj[1] = Y_Strt; // The Projection point is P_Strt;
			}
			else if (DP_PPe_PePm == 0)
			{
				XY_Prj[0] = X_End;
				XY_Prj[1] = Y_End; // The Projection point is P_End;
			}
			else
			{
				XY_Prj[0] = X_Mid;
				XY_Prj[1] = Y_Mid;
				break;
			}
			
			if (sqrt(Cart_DotProduct(V_PmidPstrt,V_PmidPstrt)) < ErrTol)
			{
				XY_Prj[0] = X_Mid;
				XY_Prj[1] = Y_Mid;
				break;              // The projection point if near P_Mid within acceptable error ErrTol;
			}
		}  // End of 'For'
		
		return XY_Prj[1];
		
	}      // End of '(Cart_Sign(DP_PPs_PsPe*DP_PPe_PsPe) < 0)'
	else
	{
		XY_Prj[0] = X_In;
		XY_Prj[1] = Cart_Y(X_In,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
		return XY_Prj[1];
	}
}

Cart_PrjPnt Cart_ProjectPoint(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol) // Solution of the projection point in Cartesian Coordinate,which is used with C-Caller in Simulink;
{
	Cart_PrjPnt Output_XY;
	float XY_Prj[2]; 
	
	float ErrTol = eTol;
	
	float X_Strt = -10,X_End = 100;
	float Y_Strt = Cart_Y(X_Strt,A0_RefL,A1_RefL,A2_RefL,A3_RefL),Y_End = Cart_Y(X_End,A0_RefL,A1_RefL,A2_RefL,A3_RefL);// Initial the Project Point
	
	float V_PPstrt[2] = {X_Strt - X_In,Y_Strt - Y_In};
	float V_PPend[2] = {X_End - X_In,Y_End - Y_In};
	float V_PstrtPend[2] = {X_End - X_Strt,Y_End - Y_Strt};
	
	float DP_PPs_PsPe = Cart_DotProduct(V_PPstrt,V_PstrtPend);
	float DP_PPe_PsPe = Cart_DotProduct(V_PPend,V_PstrtPend);
	
	int i;
    float X_Mid,Y_Mid,V_PPmid[2],V_PmidPstrt[2],V_PendPmid[2];
    
	float DP_PPs_PmPs,DP_PPm_PmPs,DP_PPm_PePm,DP_PPe_PePm;
	
	if (Cart_Sign(DP_PPs_PsPe*DP_PPe_PsPe) < 0)
	{
		for (i = 1;i < 100;i++)
		{
			X_Mid = (X_Strt + X_End)/2;
			Y_Mid = Cart_Y(X_Mid,A0_RefL,A1_RefL,A2_RefL,A3_RefL); // Calculate the middle point
			
			V_PPmid[0] = X_Mid - X_In;
			V_PPmid[1] = Y_Mid - Y_In; // Vector of P_Mid and P;
			
			V_PmidPstrt[0] = X_Strt - X_Mid;
			V_PmidPstrt[1] = Y_Strt - Y_Mid; // Vector of P_Strt and P_Mid;
			
			V_PendPmid[0] = X_Mid - X_End;
			V_PendPmid[1] = Y_Mid - Y_End; // Vector of P_End and P_Mid;
			
			DP_PPs_PmPs = Cart_DotProduct(V_PPstrt,V_PmidPstrt);
			DP_PPm_PmPs = Cart_DotProduct(V_PPmid,V_PmidPstrt);  // Dot Product;
			
			DP_PPe_PePm = Cart_DotProduct(V_PPend,V_PendPmid);
			DP_PPm_PePm = Cart_DotProduct(V_PPmid,V_PendPmid);
			
			if (Cart_Sign(DP_PPs_PmPs*DP_PPm_PmPs)<0 & Cart_Sign(DP_PPm_PePm*DP_PPe_PePm)>0)
			{
				X_End = X_Mid;
				Y_End = Y_Mid;
				V_PPend[0] = V_PPmid[0];
				V_PPend[1] = V_PPmid[1]; // The projection point is between P_Strt and P_Mid;
			}
			else if (Cart_Sign(DP_PPs_PmPs*DP_PPm_PmPs)>0 & Cart_Sign(DP_PPm_PePm*DP_PPe_PePm)<0)
			{
				X_Strt = X_Mid;
				Y_Strt = Y_Mid;
				V_PPstrt[0] = V_PPmid[0];
				V_PPstrt[1] = V_PPmid[1]; // The projection point is between P_Mid and P_End;
			}
			else if (DP_PPs_PmPs == 0)
			{
				XY_Prj[0] = X_Strt;
				XY_Prj[1] = Y_Strt; // The Projection point is P_Strt;
			}
			else if (DP_PPe_PePm == 0)
			{
				XY_Prj[0] = X_End;
				XY_Prj[1] = Y_End; // The Projection point is P_End;
			}
			else
			{
				XY_Prj[0] = X_Mid;
				XY_Prj[1] = Y_Mid;
				break;
			}
			
			if (sqrt(Cart_DotProduct(V_PmidPstrt,V_PmidPstrt)) < ErrTol)
			{
				XY_Prj[0] = X_Mid;
				XY_Prj[1] = Y_Mid;
				break;              // The projection point if near P_Mid within acceptable error ErrTol;
			}
		}  // End of 'For'
		
		Output_XY.XY_Prj_Test[0] = XY_Prj[0];
		Output_XY.XY_Prj_Test[1] = XY_Prj[1];
		Output_XY.ItrNumb = i;
		return Output_XY;
		
	}      // End of '(Cart_Sign(DP_PPs_PsPe*DP_PPe_PsPe) < 0)'
	else
	{
		XY_Prj[0] = X_In;
		XY_Prj[1] = Cart_Y(X_In,A0_RefL,A1_RefL,A2_RefL,A3_RefL);
		
		Output_XY.XY_Prj_Test[0] = XY_Prj[0];
		Output_XY.XY_Prj_Test[1] = XY_Prj[1];
		Output_XY.ItrNumb = 0;
		return Output_XY;
	}
}

float Cart_theta_r(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL)
{
	return (A1_RefL + 2 * A2_RefL * X + 3 * A3_RefL * pow(X, 2));//Equation is Y = A1*X + 2*A2*X + 3*A3*X^2
}




