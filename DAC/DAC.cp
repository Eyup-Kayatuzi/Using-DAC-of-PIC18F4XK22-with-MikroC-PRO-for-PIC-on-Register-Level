#line 1 "C:/Users/ARGE/Desktop/MicroC_Folder2/DAC/DAC.c"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic/include/stdint.h"




typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;



typedef signed char int_fast8_t;
typedef signed int int_fast16_t;
typedef signed long int int_fast32_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;


typedef signed int intptr_t;
typedef unsigned int uintptr_t;


typedef signed long int intmax_t;
typedef unsigned long int uintmax_t;
#line 5 "C:/Users/ARGE/Desktop/MicroC_Folder2/DAC/DAC.c"
void main() {

 OSCCON = 0x62;

 DACCON0.B7 = 0;
 DACCON0.B6 = 1;
 DACCON0.B5 = 1;
 DACCON0.B3 = 0;
 DACCON0.B2 = 0;
 DACCON0.B0 = 0;
 DACCON0.B7 = 1;

 DACCON1.B0 = 1;
 DACCON1.B1 = 1;
 DACCON1.B2 = 1;
 DACCON1.B3 = 1;
 DACCON1.B4 = 1;

}
