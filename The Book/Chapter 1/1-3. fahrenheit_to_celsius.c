#include <stdio.h>

/* print Fahrenheit-Celsius table 
 * for fahr = 0, 20, ... 300 */

int	main(void)
{
	float	fahr;
	float	celsius;
	int		lower;
	int		upper;
	int		step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("Fahr\tCel\n");
	while (fahr <= upper)
	{
		/*
		 * We were unable to use 5/9 int the previous version because integers
		 * division would truncate it to zero
		 * celsius = (5 * (fahr - 32)) / 9;
		 */
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}
	return (0);
}
