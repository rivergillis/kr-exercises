/*	Exercise 1-13
 *	Write a program to print a histogram of the lengths of words in its input.
 *	It is easy to draw the histogram with bars horizontal; a vertical
 *	orientation is more challenging.
 *
 *	-Horizontal Version-
 */

#include <stdio.h>

int main()
{
	int i, x, c, length = 0;
	int lengths[20];

	for (i = 0; i <= 20; ++i) {
		lengths[i] = 0;
	}

	// Gather input from the keyboard, count the length, put it into an array
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (length <= 20) {
				++lengths[length - 1];
			}
			length = 0;
		} else {
			++length;
		}
	}

	// Print a histogram using data from the lengths array
	printf("\n");
	for (i = 0; i <= 20; ++i) {
		printf("%2d ", i + 1);
		for (x = 1; x <= lengths[i]; ++x) {
			printf("-");
		}
		putchar('\n');
	}

	return 0;
}