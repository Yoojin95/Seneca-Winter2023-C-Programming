/***********************************************************************
// IPC Workshop 2 p1: tester program
//
// File	main.c
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void shoppingStats(int noOfItems);
void line(char fill, int length);
int main(void) {
   int num;
   line('+', 26);
   printf("Enter the folloing values:\n4\n12.12\n23.23\n34.34\n45.45\n");
   line('+', 26);
   printf("Money Spending Calculator\n");
   line('=', 50);
   printf("How many items were bought?\n> ");
   scanf("%d", &num);
   shoppingStats(num);
   return 0;
}