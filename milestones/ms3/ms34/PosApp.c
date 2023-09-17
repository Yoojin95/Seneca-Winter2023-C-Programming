/* Citation and Sources...
Final Project Milestone34
Module: search
Filename: PosApp.c
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
#include<stdio.h>
#include "PosApp.h"

void start(const char* action) {
	printf(">>>> %s...\n", action);
}

void saveItems(const char filename[]) {
	start("Saving Items");
	start("Done!");
	int i;
	FILE* fptr;
	fptr = fopen(filename, "w");
	if (fptr != NULL) // check if opening file was successful
	{
		for (i = 0; i < noOfItems; i++)
		{
			fprintf(fptr, "%s,%s,%.2lf,%d,%d\n", items[i].SKU, items[i].name, items[i].price, items[i].taxed, items[i].quantity);
		}
		fclose(fptr);
	}
	else {
		printf("Could not open >>>%s", filename);
	}
}

double cost(const struct Item* item) {
	double the_cost;
	the_cost = item->price * (1 + item->taxed * TAX);
	return the_cost;
}

int loadItems(const char filename[]) {
	int cnt = 0;
	start("Loading Items");
	FILE* fptr;
	fptr = fopen("posdata.csv", "r");

	if (fptr != NULL) {
		while (fscanf(fptr, "%[^,],%[^,],%lf,%d,%d\n",
			items[cnt].SKU, items[cnt].name, &items[cnt].price, &items[cnt].taxed, &items[cnt].quantity) == 5) {
			cnt++;
		}
		noOfItems = cnt;
		start("Done!");
	}
	fclose(fptr);
	return noOfItems;
}

void inventory(void) {
	double tav = 0.0;
	int i = 0;
	start("List Items");
	listItems();
	for (i = 0; i < noOfItems; i++) {
		tav += cost(&items[i]) * items[i].quantity;
	}
	printf("                               Total Asset: $  | %13.2lf |\n", tav);
	printf("-----------------------------------------------^---------------^\n");
}

void addItem(void) {
	start("Adding Item");
}
void removeItem(void) {
	start("Remove Item");
}
void stockItem(void) {
	start("Stock Items");
}
void POS(void) {
	start("Point Of Sale");
}

void listItems(void) {
	char iName[19];		// Create a local c-string for printing name (18+NULL)
	int i = 0;
	printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n");
	printf("-----|--------|--------------------|-------|---|-----|---------|\n");
	for (i = 0; i < noOfItems; i++) {
		strncpy(iName, items[i].name, 19); // copy the first 18 characters of the item element into iName
		iName[18] = '\0';
		printf("%4d | %6s | %-18s | %5.2lf | %c | %3d | %7.2lf |\n", i + 1, items[i].SKU, iName, items[i].price, items[i].taxed ? 'T' : ' ', items[i].quantity, cost(&items[i]) * items[i].quantity);
	}
	printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}

double billDisplay(const struct Item* item) {
	double theCost = cost(item);
	char iName[19]; // char iName[15]
	strncpy(iName, item->name, 18);
	iName[18] = '\0';
	printf("| %-14.14s|%10.2lf | %3s |\n", item->name, theCost, item->taxed ? "Yes" : "");
	return cost(item);
}

void display(const struct Item* item) {
	printf("=============v\n");
	printf("Name:        %s\n", item->name);
	printf("Sku:         %s\n", item->SKU);
	printf("Price:       %.2lf\n", item->price);
	if (item->taxed) {
		printf("Price + tax: %.2lf\n", cost(item));
	}
	else {
		printf("Price + tax: N/A\n");
	}
	printf("Stock Qty:   %d\n", item->quantity);
	printf("=============^\n");
}
/*
>>>> Loading Items...
>>>> Done!...
Sku: 1313
SKU found at index 13
Sku: 5656
SKU found at index 23
Sku: 9852
SKU found at index 0
Sku: 3333
SKU not found!
Sku:
Search was executed 4 times...
*/
int search(void) {
	int i;
	char SKU[MAX_SKU_LEN + 1];
	int result = -1;
	printf("Sku: ");
	if (scanf("%[^\n]%*c", SKU) != 1) {
		result = -2;	// no value entered
	}
	for (i = 0; i < noOfItems; i++) {
		if (strcmp(SKU, items[i].SKU) == 0) {
			result = i;
		}
	}
	return result;
}