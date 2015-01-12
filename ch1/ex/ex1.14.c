/*	Exercise 1-14
 *	Write a program to print a histogram of the frequencies of different
 *	characters in its input.
 */

#include <stdio.h>

int main(void)
{
	int c, i, p;
	int ascii[128];

	for (i = 0; i < 128; ++i) {
		ascii[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		++ascii[c];
	}

	for (i = 0; i < 128; ++i) {
		printf("%c ", i);
		for (p = 0; p < ascii[i]; ++p) {
			putchar('-');
		}
		putchar('\n');
	}
	return 0;
}