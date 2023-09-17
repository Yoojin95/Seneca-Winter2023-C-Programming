/******************************************************************
// Yoojin Lee, ylee237@myseneca.ca, 188162218, February 3, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void prnGrade(int mark) {

	if (mark < 50) {
		printf("F");
	}
	else if (mark < 55) {
		printf("D");
	}
	else if (mark < 60) {
		printf("D+");
	}
	else if (mark < 65) {
		printf("C");
	}
	else if (mark < 70) {
		printf("C+");
	}
	else if (mark < 75) {
		printf("B");
	}
	else if (mark < 80) {
		printf("B+");
	}
	else if (mark < 85) {
		printf("A");
	}
	else if (mark < 90) {
		printf("A+");
	}
	//return mark; // add a print statement to print the return value of the function for testing
}

int getNoOfStudents(void) {
	int num = 0;
	printf("Please enter the number of students: ");
	scanf("%d", &num);
	return num; // return the value?
}

// ??
int getAverage(int NumberOfStudents) {
	int cnt;
	cnt = 0;
	int sum = 0;
	int mark;
	int average;

	printf("Enter %d student marks...\n", NumberOfStudents); // 여기까지 성공

	while (cnt < NumberOfStudents) {
		printf("%d> ", cnt + 1);
		scanf("%d", &mark);

		if (mark < 0) {
			printf("Invalid Mark, values should be greater than or equal 0.\n");
		}
		else if (mark > 100) {
			printf("Invalid Mark, values should be less than or equal to 100.\n");
		}
		else {
			cnt++;
			sum += mark; // ** ws2-lab 참고 **
		}
		average = sum / NumberOfStudents; // 오류 #1
	}
	return average;
}

	void printReport(int NumberOfStudents, int average) {

		printf("Number of students: %d\n", NumberOfStudents);
		printf("Class average: %d%% (", average); // 오류 #2
		prnGrade(average);
		putchar(')');
	}

