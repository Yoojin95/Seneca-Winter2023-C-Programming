#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle(char leftTop, char top, char topRight,
    char right, char rightButtom, char buttom,
    char buttomLeft, char left, char fill,
    int width, int height) {

    int num1;
    int num2;

    putchar(leftTop);

    for (num1 = 0; num1 < width-2; num1++) {
        putchar(top);
    }

    putchar(topRight);
    putchar('\n');

    for (num2 = 0; num2 < height-2; num2++) {
        putchar(left);
        for (num1 = 0; num1 < width-2; num1++) {
            putchar(fill);
        }
        putchar(right);
        putchar('\n');
    }
    
    putchar(buttomLeft);

    for (num1 = 0; num1 < width-2; num1++) {
        putchar(buttom);
    }
    putchar(rightButtom);
    putchar('\n');
}