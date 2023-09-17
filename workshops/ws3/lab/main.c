/******************************************************************
// Yoojin Lee, ylee237@myseneca.ca, 188162218, February 3, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnGrade(int mark);
int getNoOfStudents(void);
int getAverage(int NumberOfStudents);
void printReport(int NumberOfStudents, int average); // int vs void Â÷ÀÌ?

int main() {
	int num;
	int average;
	printf("Class test marks report program...\n\n"); // title
	num = getNoOfStudents(); // receive the number of students from the user
	average = getAverage(num); // get the marks of all the students and calculate whole class
	printReport(num, average); // return the average

	return 0;
}
