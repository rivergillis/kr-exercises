/*	Exercise 1-12
 *	Write a program that prints its input one word per line.
 */

#include <stdio.h>

int main()
{
	int c, prevc = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n')
			putchar(c);
		else if (prevc != ' ' && prevc != '\t')
			putchar('\n');
		prevc = c;
	}

	return 0;
}