/*	Exercise 1-17
 *	Write a program to print all input lines that are longer than 80 characters.
 */
 
#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int getline(char line[], int maxline);

int main(void)
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	/* now that we have copied the string, we can resume getting the length */
	if (i >= (lim - 1)) {
		while ((c = getchar()) != EOF && c != '\n') {
			++i;
		}
	}
	return i;
}