#include <stdio.h>

// Print F -> C conversion table
int main(){

	int fahr, celcius;
	int lower, upper, step;

	// Numerical values to use in the table
	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;

	// Printing sequence

	printf("Celcius:	Farenheit:\n");
	while(celcius <= upper){
		fahr = celcius * (9/5) + 32;
		printf("%d\t\t%d\n", celcius, fahr);
		celcius = celcius + step;
	}
	return 0;
}