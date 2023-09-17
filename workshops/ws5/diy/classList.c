/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, February 22, 2023
*******************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void subjectMarksReport(void) {
	char subjectCode[10]; // subject code 
	int noOfStudents; // number of students 
	int studentsMark[100]; // students mark 
	int studentNumbers[100]; // student numbers 
	noOfStudents = getSubjectInfo(subjectCode);
	getStudentsMarks(noOfStudents, studentNumbers, studentsMark);
	printReport(subjectCode, noOfStudents, studentNumbers, studentsMark);
}

void printReport(const char subjectCode[], int noOfStudents,
					    const int studentNumbers[], const int studentsMark[]) {
	int
		i,
		totalMarks=0, 
		highestMark,
		lowestMark;
	putchar('\n');

	printf(" SUBJECT MARKS REPORT!\n");
	printf(" +-------------------+\n");
	printf(" | %-18s|\n", subjectCode);
	printf(" +---+--------+------+\n");
	printf(" |Row| Std No | mark |\n");
	printf(" +---+--------+------+\n");

	for(i = 0; i < noOfStudents; i++) {
		printf(" | %d | %06d |  %3d |\n", i + 1, studentNumbers[i], studentsMark[i]);

		totalMarks += studentsMark[i];

		if(studentsMark[i] > highestMark) {
			highestMark = studentsMark[i];
		}
		if(studentsMark[i] < lowestMark) {
			lowestMark = studentsMark[i];
		}
	}
	printf(" +---+--------+------+\n");
	printf(" | Average    | %4d |\n", totalMarks / noOfStudents);
	printf(" | Highest    | %4d |\n", highestMark);
	printf(" | Lowest     | %4d |\n", lowestMark);
	printf(" +------------+------+\n");
}

void getStudentsMarks(int noOfStudents, int studentNumbers[], int studentsMark[]) {
	int i;
	for(i = 0; i < noOfStudents; i++) {
		printf("%d of %d:\n", i + 1, noOfStudents);
		printf("Student Number: ");
		studentNumbers[i] = getMMInt(9999, 1000000, "Student Number");
		printf("Mark: ");
		studentsMark[i] = getMMInt(0, 100, "Mark");
	}
}


int getSubjectInfo(char subjectCode[]) {
	int noOfStudents;
	printf("Enter subject Name: ");
	scanf("%s", subjectCode);
	printf("Enter Number of students (max 50): ");
	noOfStudents = getMMInt(1, 50, "Number of Students");
	printf("Please enter %d student marks:\n", noOfStudents);
	return noOfStudents;
}