/***********************************************************************
// IPC Workshop 2 p2: tester program
//
// File	main_prof.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
void rectangle(char leftTop, char top, char topRight, 
               char right,char rightButtom, char buttom, 
               char buttomLeft, char left, char fill, 
               int width, int height);

int main(void) {
   int i;
   for(i = 0; i < 70; i+=5) {
      rectangle('/', '#', '\\', '#', '/', '#', '\\', '#', '.', 5 + i, 5);
      putchar('\n');
   }
   return 0;
}
