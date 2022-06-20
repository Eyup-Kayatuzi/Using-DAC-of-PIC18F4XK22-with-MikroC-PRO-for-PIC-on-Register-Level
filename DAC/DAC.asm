
_main:

;DAC.c,5 :: 		void main() {
;DAC.c,7 :: 		OSCCON = 0x62; // 8000000
	MOVLW       98
	MOVWF       OSCCON+0 
;DAC.c,9 :: 		DACCON0.B7 = 0; //  Clearing the DACEN bit in the VREFCON1 register
	BCF         DACCON0+0, 7 
;DAC.c,10 :: 		DACCON0.B6 = 1; //SETTING the DACLPS bit in the VREFCON1
	BSF         DACCON0+0, 6 
;DAC.c,11 :: 		DACCON0.B5 = 1;
	BSF         DACCON0+0, 5 
;DAC.c,12 :: 		DACCON0.B3 = 0;    //Configuring the DACPSS bits to the proper
	BCF         DACCON0+0, 3 
;DAC.c,13 :: 		DACCON0.B2 = 0;   //Configuring the DACPSS bits to the proper
	BCF         DACCON0+0, 2 
;DAC.c,14 :: 		DACCON0.B0 = 0;
	BCF         DACCON0+0, 0 
;DAC.c,15 :: 		DACCON0.B7 = 1;
	BSF         DACCON0+0, 7 
;DAC.c,17 :: 		DACCON1.B0 = 1;
	BSF         DACCON1+0, 0 
;DAC.c,18 :: 		DACCON1.B1 = 1;
	BSF         DACCON1+0, 1 
;DAC.c,19 :: 		DACCON1.B2 = 1;
	BSF         DACCON1+0, 2 
;DAC.c,20 :: 		DACCON1.B3 = 1;
	BSF         DACCON1+0, 3 
;DAC.c,21 :: 		DACCON1.B4 = 1;
	BSF         DACCON1+0, 4 
;DAC.c,23 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
