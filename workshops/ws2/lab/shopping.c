#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void line(char fill, int length){
	int i;
	for (i = 0; i < length; i++) {
		putchar(fill);
	}
	printf("\n");
}
void shoppingStats(int noOfItems) {
	int num;
	double itemsPrice;
	double avg;
	double sum;

	printf("Please enter the price of the %d items bought...\n", noOfItems);

	sum = 0;
	num = 0;

	while (num < noOfItems) {
		printf("%d> ", num + 1);
		scanf("%lf", &itemsPrice);
		num++;
		sum += itemsPrice;
	}
	line('-', 50);

	avg = sum / noOfItems;

	printf("Total price for all the items purchased: %.2lf\n", sum);
	printf("Average price of the items: %.2lf\n", avg);
	line('=', 50);

}
