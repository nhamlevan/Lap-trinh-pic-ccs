/*========================================= 
8-BIT LCD DRIVER FOR PIC16F877A CCSC 
==========================================*/ 
/////////////////////////////////////////////////////////////////// 
//  CCS C Compiler 
// LCD 16x2 
// 
// by Nisar Ahmed 
// 2009/03/27 
////////////////////////////////////////////////////////////////// 
#include <16F877.h>                           // PIC16F877 header file 
//#include <def_877a.h>
#device *=16
#use delay(clock=4000000)                       // for 4Mhz crystal 

#use i2c(master,fast,sda=PIN_C4,scl=PIN_C3)
#FUSES NOWDT, HS, NOPUT, NOPROTECT, NODEBUG, NOBROWNOUT, NOLVP, NOCPD, NOWRT

#define PORT_A                  0               // define for function output() 
#define PORT_B                  1 
#define PORT_C                  2 
#define PORT_D                  3 
#define PORT_E                  4 

#define NCHAR_PER_LINE          16              // max char numbers per line 
#define LCD_RS                  PIN_C0 
#define LCD_RW                  PIN_C1 
#define LCD_E                   PIN_C2 
#define LCD_DAT                 PORT_B 

#include "lcd_4bit_lib.c" 

/*=======================================*/ 
void main(void) 
{ 
        char LINE2[] = { "PIC16F877 CCSC " }; 
        //int8 i; 

        lcd_init(); 
        char a[16];
        //sprintf(a,"%5u",511);
        lcd_putChar('b');
        lcd_putChar('b');
        lcd_move(2,0);
        lcd_print_str(LINE2);
        //lcd_print_str(LINE2);
}//end main() 
