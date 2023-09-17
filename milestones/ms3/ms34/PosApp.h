/* Citation and Sources...
Final Project Milestone34
Module: search
Filename: PosApp.h
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

#ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H
#include <stdio.h>
#include <string.h>
#include "POS.h"

struct Item {
	char SKU[MAX_SKU_LEN + 1];
	char name[61];
	double price;
	int taxed;
	int quantity;
};
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
void display(const struct Item* item);
double cost(const struct Item* item);

struct Item items[MAX_NO_ITEMS];
double billDisplay(const struct Item* item);
int search(void);
#endif // !SDDS_POSAPP_H

