/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, March 24, 2023
*******************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Movie.h"

int loadMovie(struct Movie* mptr, FILE* fptr) {

	int temp, ret = 0;
	temp = fscanf(fptr, "%60[^\t]\t%d\t%3[^\t]\t%d\t%60[^\t]\t%f", mptr->title, &mptr->year, mptr->rating, &mptr->duration, mptr->genre, &mptr->conRating);
	if (temp == 6)
	{
		ret = 1;
		fflushKey(fptr);
	}
	return ret;
}
// return (fscanf(fptr, "%60[^\t]\t%d\t%3[^\t]\t%d\t%60[^\t]\t%f", mptr->title, &mptr->year, mptr->rating, &mptr->duration, mptr->genre, &mptr->conRating) == 6);

void list(const struct Movie* mptr, int row) {
	printf("| %3d | ", row);
	printf("%-20.20s", mptr->title);
	printf(" | %4d | %4s |", mptr->year, mptr->rating);
	printf("%2d:%02d ", mptr->duration / 60, mptr->duration % 60);
	printf("| %-25.25s", mptr->genre);
	printf(" | %4.1f |\n", mptr->conRating);
}

void display(const struct Movie* m) {
	printf("Title: %s\n", m->title);
	printf("Year: %d\n", m->year);
	printf("Rating: %s\n", m->rating);
	printf("Duration:%2d:%02d\n", m->duration / 60, m->duration % 60);
	printf("Genres: %s\n", m->genre);
	printf("Consumer Rating: %3.1f\n", m->conRating);
}

const char* getMovieTitle(const struct Movie* mptr)
{
	return mptr->title;
}

void fflushKey(FILE* file) {
	char ch = 'x';
	while (ch != '\n') {
		ch = fgetc(file);
	}
}
