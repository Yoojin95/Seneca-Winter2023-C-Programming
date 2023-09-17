#define _CRT_SECURE_NO_WARNINGS
#include "PosApp.h"

void start(const char* action) {
	printf(">>>> %s...\n", action);
}

void saveItems(const char filename[]) {
	start("Saving Items");
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

