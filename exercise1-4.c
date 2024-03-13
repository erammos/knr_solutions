#include <stdio.h>
/* print Celsius - fahrenheit table*/
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -17;			/* lower limit of temperatuire scale */
    upper = 148;		/* upper limit */
    step = 11;			/* step size */
    celsius = lower;
    while (celsius <= upper) {
	fahr = celsius * (9.0 / 5.0) + 32.0;
	printf("%3.0f %6.1f\n", celsius, fahr);
	celsius = celsius + step;
    }
}
