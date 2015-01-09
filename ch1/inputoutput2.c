#include <stdio.h>

/* copy input to output; 2nd verison */
main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}