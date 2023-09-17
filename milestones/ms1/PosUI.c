#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "PosApp.h"

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