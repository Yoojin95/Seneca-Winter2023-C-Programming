#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle(char leftTop, char top, char topRight,
	char right, char rightButtom, char buttom,
	char buttomLeft, char left, char fill,
	int width, int height);


int main(void) {
	rectangle('+', '-', '+', '|', '+', '-', '+', '|', ' ', 20, 8);
	rectangle('/', '-', '\\', '|', '/', '-', '\\', '|', 'X', 50, 14);

	return 0;
}