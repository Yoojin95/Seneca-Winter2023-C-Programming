#include <stdio.h>

void title(void); 
void info(void);
void line(void);

int main(void)
{
	printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
	line();
	info();
	line();
	title();
	line();

	return 0;
}

void title(void)
{
	int ipc144;
	int uli101;
	int eac150;
	int avg;

	printf("Enter the marks for the following subjects,\n");
	printf("IPC144: ");
	scanf("%d", &ipc144);
	printf("ULI101: ");
	scanf("%d", &uli101);
	printf("EAC150: ");
	scanf("%d", &eac150);

	avg = (ipc144 + uli101 + eac150) / 3;

	printf("The average is: %d\n", avg);
}

void line(void) {
	printf("------------------------------------------------------------\n");
}

void info(void) {
	printf("Name:");
	printf("\n\t");
	printf("Yoojin Lee");
	printf("\n");
	printf("Email:");
	printf("\n\t");
	printf("ylee237@myseneca.ca");
	printf("\n");
}