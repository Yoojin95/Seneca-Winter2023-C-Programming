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
//int numDashes(void) {
//
//}
void flushKey(void) {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}
void line(char fill, int len) {
    int i;
    for (i = 0; i < len; i++) {
        putchar(fill);
    }
    if (len > 0) putchar('\n');
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