/*	Rewrite the temperature conversion program of Section 1.2 to use a
 *	function for conversion.
 */

#include <stdio.h>

float convert(float fahr);

int main(void) {
	float fahr;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, convert(fahr));
		fahr += step;
	}
	return 0;
}

/* convert: converts a fahrenheit temperature to celsius */
float convert(float fahr)
{
	return (5.0/9.0) * (fahr - 32.0);
}