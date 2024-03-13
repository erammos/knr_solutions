#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

float to_celsius(float fahr)
{
     return (5.0 / 9.0) * (fahr - 32.0);
}

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;			/* lower limit of temperatuire scale */
    upper = 300;		/* upper limit */
    step = 20;			/* step size */
    fahr = lower;
    printf("Fahr Celsius\n");
    printf("==== ======\n");
    while (fahr <= upper) {
	printf("%3.0f %6.1f\n", fahr, to_celsius(fahr));
	fahr = fahr + step;
    }
}
