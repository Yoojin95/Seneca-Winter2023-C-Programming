#include <stdio.h>

void title(void);
void line(void);
void info(void);

int main(void)
{
	title();
	line();
	info();
	line();
	
	return 0;
}

void title(void)
{
	printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}
void line(void)
{
	printf("------------------------------------------------------------\n");
}
void info(void)
{
	printf("Name:");
	printf("\n\t");
	printf("Yoojin Lee");
	printf("\n");
	printf("Email:");
	printf("\n\t");
	printf("ylee237@myseneca.ca");
	printf("\n");
}