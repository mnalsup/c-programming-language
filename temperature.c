#include <stdio.h>

/* print Farenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
	int fahr;

	printf("F\tC\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return 0;
}