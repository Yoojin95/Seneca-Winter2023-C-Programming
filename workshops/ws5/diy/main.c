/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, February 22, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "classList.h"
#include "utils.h"

int main(void) {
    int i;
    printf("Subject Performance report\n");
    printf("-------------------------\n");
    do {
        subjectMarksReport();
        printf(" Exit? ");
        } while (!yes());
        return 0;
    }
