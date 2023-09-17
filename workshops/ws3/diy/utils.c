/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, February 8, 2023
*******************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKey(void);

int getInt(void) {
	int value = 0;
	int done = 0;
	char alphabet;

	while (1)
	{
		done = scanf("%d%c", &value, &alphabet);
		if (done != 2)
		{
			flushKey();
			printf("Invalid Integer, try again: ");
		}
		else if (alphabet != '\n')
		{
			flushKey();
			printf("Enter only an integer, try again: ");
		}
		else return value;
	}
}

int getIntMM(int min, int max)
{
	int value = 0;
	int done = 0;
	char alphabet;

	while (1)
	{
		done = scanf("%d%c", &value, &alphabet);
		if (done != 2)
		{
			flushKey();
			printf("Invalid Integer, try again: ");
		}
		else if (alphabet != '\n')
		{
			flushKey();
			printf("Enter only an integer, try again: ");
		}
		else
		{
			if (value >= 10 && value <= 20) {
				return value;
			}
			else {
				printf("[%d<=Number<=%d], try again: ", min, max);
			}
		}
	}
}

double getDouble(void) {
	double dvalue = 0;
	int done = 0;
	char alphabet;

	while (1)
	{
		done = scanf("%lf%c", &dvalue, &alphabet);
		if (done != 2)
		{
			flushKey();
			printf("Invalid Double, try again: ");
		}
		else if (alphabet != '\n')
		{
			flushKey();
			printf("Enter only a Double, try again: ");
		}
		else return dvalue;
	}
}

double getDoubleMM(double min, double max)
{
	double dvalue = 0;
	int done = 0;
	char alphabet;

	while (1)
	{
		done = scanf("%lf%c", &dvalue, &alphabet);
		if (done != 2)
		{
			flushKey();
			printf("Invalid Double, try again: ");
		}
		else if (alphabet != '\n')
		{
			flushKey();
			printf("Enter only a Double, try again: ");
		}
		else
		{
			if (dvalue >= 10.1 && dvalue <= 20.1) {
				return dvalue;
			}
			else {
				printf("[%.3lf<=Number<=%.3lf], try again: ", min, max);
			}
		}
	}

}
void flushKey(void) {
	char ch = 'x';
	while (ch != '\n') {
		ch = getchar();
	}
}

void line(char fill, int len) {
	int cnt;
	for (cnt = 0; cnt < len; cnt++) {
		putchar(fill);
	}
	putchar('\n');
}
