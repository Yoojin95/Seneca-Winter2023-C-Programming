#ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H
#include <stdio.h>
#include <string.h>
#include "POS.h"

void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
int noOfItems;
int loadItems(const char filename[]);
void saveItems(const char filename[]);
void listItems(void);

struct Item {
	char SKU[MAX_SKU_LEN + 1];
	char name[61];
	double price;
	int taxed;
	int quantity;
};
struct Item items[MAX_NO_ITEMS];

#endif // !SDDS_POSAPP_H

