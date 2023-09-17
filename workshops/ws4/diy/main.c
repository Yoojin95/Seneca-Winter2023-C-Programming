#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc();

int main(void)
{
	printf("My Simple Calculator\n" "-------------------------\n");
	while (calc());
	printf("Goodbye!\n");
	return 0;
}