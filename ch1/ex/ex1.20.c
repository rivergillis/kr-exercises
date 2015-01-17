/*	Exercise 1-20
 *	Write a program detab that replaces tabs in the input with the proper number
 *	of blanks to space to the next tab stop. Assume a fixed set of tab stops,
 *	say ever n columns. Should n be a variable or a symbolic parameter?
 */
#include <stdio.h>
#define MAXLINE	1000	/* max input line size */

int getline(char line[], int limit);
void detab(char line[], int length);

int main(void)
{
	int len;			/* length of current line */
	char line[MAXLINE];	/* current line */

	while ((len = getline(line, MAXLINE)) > 0) {
		detab(line, len);
		printf("%s", line);
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* detab: replaces tabs in a line with blanks */
void detab(char s[], int len)
{

}