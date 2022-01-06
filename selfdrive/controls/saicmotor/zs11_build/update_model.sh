#!/usr/bin/bash
rm app_ert_rtw/ -rf

rm src/*

rm include/*

rm libVLatC.so
scp -r chaouqn@192.168.43.79:/home/chaouqn/Desktop/mpc_test/app_ert_rtw/ .
