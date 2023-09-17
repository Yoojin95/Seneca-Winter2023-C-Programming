/* Citation and Sources...
Final Project Milestone31
Module: saveItems
Filename: main31.c
Version 1.0
Author	Yoojin Lee (188162218)
Revision History
-----------------------------------------------------------
Date      Reason
2023/4/17  Preliminary release
2023/4/17  Debugged DMA
-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------
OR
-----------------------------------------------------------
Write exactly which part of the code is given to you as help and
who gave it to you, or from what source you acquired it.
-----------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosApp.h"
void fileDump(const char* filename);
int main() {
    fileDump("posdata.csv");
    loadItems("posdata.csv");
    saveItems("posdata_out.csv");
    fileDump("posdata_out.csv");
    return 0;

}

void fileDump(const char* filename) {
    FILE* fptr = fopen(filename, "r");
    if (fptr) {
        char ch = 0;
        printf("Contents of file >>%s<<:\n", filename);
        while (fscanf(fptr, "%c", &ch) == 1) {
            putchar(ch);
        }
        fclose(fptr);
        printf("End of data in >>%s<<\n", filename);
    }
    else {
        printf("file: >>%s<< not found!\n", filename);
    }
}
