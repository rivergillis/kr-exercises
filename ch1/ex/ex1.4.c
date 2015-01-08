#include <stdio.h>

/*	print Celsius-Fahrenheit table */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -30;		/* lower limit of temperature table */
	upper = 100;	/* upper limit */
	step = 10;		/* step size */

	celsius = lower;
	printf("Celsius to Fahrenheit conversion table\n");
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}