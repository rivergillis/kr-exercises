/*	Exercise 1-8
 *	Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

 int main()
 {
 	int c, blank, tab, newline;
 	blank = tab = newline = 0;

 	while ((c = getchar()) != EOF) {
 		if (c == ' ')
 			++blank;
 		else if (c == '\t')
 			++tab;
 		else if (c == '\n')
 			++newline;
 	}
 	printf("\n%d blanks, %d tabs, %d newlines\n", blank, tab, newline);

 	return 0;
 }