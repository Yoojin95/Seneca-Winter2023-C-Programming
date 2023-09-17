/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, February 22, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

char getSingleChar(void) {
   char ch = getchar();
   flushKey();
   return ch;
}

int getInt(void) {
   int value;
   int done = 0;
   while (!done) {
      if (scanf("%d", &value) == 1) {
         done = 1;
      }
      else { // user enterd non integer
         flushKey();
         printf("Invalid Integer, try again: ");
      }
   }
   flushKey();
   return value;
}

int getMMInt(int min, int max, const char valueName[]) {
   int value=0;
   do {
      value = getInt();
      if(value > max || value < min) {
         printf("[%d<=%s<=%d], try again: ", min, valueName, max);
      }
   } while(value > max || value < min);
 /*  int done = 0;
   while(!done) {
      if(scanf("%d", &value) == 1) {
         if(value <= max && value >= min) {
            done = 1;
         } else {
            printf("[%d<=%s<=%d], try again: ", min, valueName, max);
            flushKey();
         }
      } else if(scanf("%d", &value) != 1) {
         printf("Invalid Integer, try again: ");
         flushKey();
      }
   }*/
   return value;
}

void flushKey(void) {
   char ch = 'x';
   while (ch != '\n') {
      ch = getchar();
   }
}

void line(char fill, int len) {
   int i;
   for(i = 0; i < len; i++) {
      putchar(fill);
   }
   if(len > 0) putchar('\n');
}

int yes(void) {
   int res;
   char resp;
   printf("(Y)es or (N)o: ");
   resp = getSingleChar();
   if (resp == 'Y' || resp == 'y') {
      res = 1;
   }
   else {
      res = 0;
   }
   return res;
}

