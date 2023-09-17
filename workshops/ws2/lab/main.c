#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(char fill, int length);
void shoppingStats(int noOfItems);

int main(void) {
	int noOfItems;
	printf("Money Spending Calculator\n");
	line('=', 25);
	printf("How many items were bought?\n");
	printf("> ");
	scanf("%d", &noOfItems);
	shoppingStats(noOfItems);

	return 0;
}

