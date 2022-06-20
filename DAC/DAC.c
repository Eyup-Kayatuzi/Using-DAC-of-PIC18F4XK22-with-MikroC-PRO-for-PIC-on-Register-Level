#include "stdint.h"



void main() {

     OSCCON = 0x62; // 8000000

     DACCON0.B7 = 0; //  Clearing the DACEN bit in the VREFCON1 register
     DACCON0.B6 = 1; //SETTING the DACLPS bit in the VREFCON1
     DACCON0.B5 = 1;
     DACCON0.B3 = 0;    //Configuring the DACPSS bits to the proper
     DACCON0.B2 = 0;   //Configuring the DACPSS bits to the proper
     DACCON0.B0 = 0;
     DACCON0.B7 = 1;

     DACCON1.B0 = 1;
     DACCON1.B1 = 1;
     DACCON1.B2 = 1;
     DACCON1.B3 = 1;
     DACCON1.B4 = 1;

}