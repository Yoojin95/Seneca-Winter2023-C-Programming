/******************************************************************
 Yoojin Lee, ylee237@myseneca.ca, 188162218, March 24, 2023
*******************************************************************/
#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include <stdio.h>
// without the stdio, C language doesn't know what a FILE is
struct Movie {
	char title[61];
	int year;
	char rating[4];
	int duration;
	char genre[61];
	float conRating;
};
int loadMovie(struct Movie* mptr, FILE* fptr);
void list(const struct Movie* mptr, int row);
void display(const struct Movie* m);
const char* getMovieTitle(const struct Movie* mptr);
void fflushKey(FILE* file);

#endif // !SDDS_MOVIE_H

