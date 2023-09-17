/******************************************************************
  Yoojin Lee, ylee237@myseneca.ca, 188162218, February 15, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calc.h"
#include "utils.h"

//void flushKey();

int calc()
{
	int i, done = 0;
	double num1, num2, result;
	char q_mark, enter;
	char operation;

	while (!done)
	{
		printf("> ");
		scanf("%c", &q_mark);

		if (q_mark == '\n')
		{
			done = 1;
			return 0; // <Enter> 
		}
		scanf("%lf%c%lf%c", &num1, &operation, &num2, &enter);

		if (q_mark == '?')
		{
			if (enter != '\n') {
				flushKey();
				printf("Invalid Command!\n[Question mark][First Number][Operation][Second Number]<ENTER>");
				putchar('\n');
			}
			else {
				switch (operation)
				{
				case '+':
					result = num1 + num2;
					int num_dashes = printf("%.3lf\n", result) - 1;
					line('-', num_dashes);
					break;
				case '-':
					result = num1 - num2;
					num_dashes = printf("%.3lf\n", result) - 1;
					line('-', num_dashes);
					break;
				case 'x':
					result = num1 * num2;
					num_dashes = printf("%.3lf\n", result) - 1;
					line('-', num_dashes);
					break;
				case '/': // '/' division operator(나누기) vs '%' modulus operater(나머지값)
					result = num1 / num2;
					num_dashes = printf("%.3lf\n", result) - 1;
					line('-', num_dashes);
					break;
				case '%':
					result = num1;
					while (result >= num2) {
						result -= num2;
					}
					num_dashes = printf("%.0lf\n", result) -1; //2
					line('-', num_dashes);
					break;
				case '^':
					if (num2 != 0) {
						result = 1.0;
						for (i = 1; i <= num2; i++) {
							result *= num1;
						}
					}
					else {
						result = 1;
					}
					num_dashes = printf("%.3lf\n", result) -1;
					line('-', num_dashes);
					break;
				default:
					printf("\'%c\' is not a valid operation, (only +,-,/,x,%% and ^ are acceptable)\n", operation);
					break;
				}
			}
		}
		else
		{
			printf("Invalid Command!\n[Question mark][First Number][Operation][Second Number]<ENTER>");
			putchar('\n');
			flushKey();
		}
	}
return 0;
}

