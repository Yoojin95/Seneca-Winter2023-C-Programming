/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, February 17, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// include required custome header file(s)
#include "classList.h"

int main(void) {
	// create two integer variables for the loop counter 
	int i; 
	// and number of students
	int noOfStudents = 0;

	// create two integer arrays (size of 50) to hold the 
	// marks and the student number of students.
	int studentNumbers[10];
	int marks[10];

	// add cString capable of holding 9 characters (+1 for null byte) 
	// for the subject code 
	char subjectCode[10];

	int totalMarks = 0;
	int highestMark = 0;
	int lowestMark = 100; // 왜 100으로 초기화?

	printf("Enter subject Name: ");
	// read the subject name using scanf
	scanf("%s", subjectCode);


	printf("Enter the number of students (max 50): ");
	// read the number of students 
	scanf("%d", &noOfStudents);

	// Prompt the user to enter the student numbers and marks
	// as displayed in the description of the workshop
	printf("Enter %d student numbers and student marks...\n", noOfStudents);


	// write a loop to get each student number and student mark info
	// the elelments of the array as described in the workshop
	for (i = 0; i < noOfStudents; i++) {

		printf("%d:\n", i + 1);
		printf("Student Number: ");
		scanf("%d", &studentNumbers[i]);
		printf("Mark: ");
		scanf("%d", &marks[i]);

		totalMarks += marks[i];

		if (marks[i] > highestMark) {
			highestMark = marks[i];
		}
		if (marks[i] < lowestMark) {
			lowestMark = marks[i];
		}
	}
	putchar('\n');

	// Call print report passing the received data.
	//printReport(subjectCode, studentNumbers, marks, noOfStudents);

	printf("SUBJECT MARKS REPORT!\n");
	printf("  +---------------+\n");
	printf("  | %s     |\n", subjectCode); // qualifier 우째이용
	printf("  +--------+------+\n");
	printf("  | Std No | mark |\n");
	printf("  +--------+------+\n");

	for (i = 0; i < noOfStudents; i++) {
		printf("  | %06d | %4d |\n", studentNumbers[i], marks[i]);
	}
	printf("  +--------+------+\n");
	printf("  |Average | %4d |\n", totalMarks / noOfStudents);
	printf("  |Highest | %4d |\n", highestMark);
	printf("  |Lowest  | %4d |\n", lowestMark);
	printf("  +--------+------+\n");

	return 0;
}

