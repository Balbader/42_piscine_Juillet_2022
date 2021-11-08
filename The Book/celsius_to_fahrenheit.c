#include <stdio.h>

int	main(void)
{
	/* print Fahrenheit-Celsius table 
	 * for fahr = 0, 20, ... 300 */

	int		fahr;
	int		celsius;
	int		lower;
	int		upper;
	int		step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}
	return (0);
}
