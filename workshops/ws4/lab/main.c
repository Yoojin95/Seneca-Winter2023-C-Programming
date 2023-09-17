/******************************************************************
// Yoojin Lee, ylee237@myseneca.ca, 188162218, February 10, 2023
*******************************************************************/
#include <stdio.h>
#include "utils.h"
#include "rental.h"

int main(void) {
    printf("Welcome to Seneca Ski Equipment Rentals...\n"
        "------------------------------------------\n");
    do {
        rental();
        printf("Exit Program? ");
    } while (!yes());

    return 0;
}