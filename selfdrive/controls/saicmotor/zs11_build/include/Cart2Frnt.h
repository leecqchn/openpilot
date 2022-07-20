#ifndef __CART2FRNT__
#define __CART2FRNT__

#include <stdio.h>
#include <math.h>

typedef struct {
	float XY_Prj_Test[2];
	int ItrNumb;
}Cart_PrjPnt;

extern Cart_PrjPnt Cart_ProjectPoint(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol);

extern float Frnt_s(float X_Prj,float Y_Prj,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,int NmbPnt);
extern float Frnt_l(float X_In,float Y_In,float X_Prj,float Y_Prj);
extern float Frnt_ds(float X_Prj,float Y_Prj,float S,float L,float vx,float theta,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
extern float Frnt_dl(float X_Prj,float Y_Prj,float S,float L,float vx,float theta,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
extern float Frnt_dds(float X_Prj,float Y_Prj,float S,float L,float dS,float dL,float vx,float theta,float ay,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
extern float Frnt_ddl(float X_Prj,float Y_Prj,float S,float L,float dS,float dL,float vx,float theta,float ay,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);


extern float Cart_Sign(float C);
extern float Cart_DotProduct(float A[],float B[]);
extern float Cart_Y(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
extern float Cart_rho(float X,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL);
extern float Cart_ProjectPoint_X(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol);
extern float Cart_ProjectPoint_Y(float X_In,float Y_In,float A0_RefL,float A1_RefL,float A2_RefL,float A3_RefL,float eTol);
extern float Cart_theta_r(float X, float A0_RefL, float A1_RefL, float A2_RefL, float A3_RefL);


#endif
