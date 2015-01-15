/*	Write a function reverse(s) that reverses the character string s. Use it to
 *	write a program that reverses its input a line at a time.
 */

#include <stdio.h>
#define MAXLINE 1000	/* max input line size */

void reverse(char s[], int length);
int getline(char s[], int limit);

int main(void)
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s\n", line);
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
	return i;
}

void reverse(char s[], int length)
{
	int i = 0, p = length - 1;
	char reversed[length];

	/* create a reversed version of the original string */
	while (i < length) {
		reversed[i++] = s[p--];
	}
	
	/* copy that reversed string back to the original string */
	for (i = 0; i < length; i++) {
		s[i] = reversed[i];
	}
}