/* Citation and Sources...
Final Project Milestone32
Module: billDisplay
Filename: PosUI.c
Version 1.0
Author	Yoojin Lee 188162218
Revision History
-----------------------------------------------------------
Date      Reason
2023/4/18  Preliminary release
2023/4/18  Debugged DMA
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
#include "PosUI.h"

int menu(void) {
	printf("The Sene-Store\n"
		"1- Inventory\n"
		"2- Add item\n"
		"3- Remove item\n"
		"4- Stock item\n"
		"5- POS\n"
		"0- exit program\n"
		"> ");

	return getIntMM(0, 5, "Selection");
}

void runPos(const char filename[]) {
	int sel = 0, done = 0;
	loadItems("posdata.csv");
	while (!done) {
		sel = menu();
		switch (sel) {
		case 1:
			inventory();
			break;
		case 2:
			addItem();
			break;
		case 3:
			removeItem();
			break;
		case 4:
			stockItem();
			break;
		case 5:
			POS();
			break;
		default:
			saveItems("posdata.csv");
			printf("Goodbye!");
			done = 1;
		}
	}
}