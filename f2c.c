#include <stdio.h>

#define START     0  /* lower limit of table */
#define STOP    300  /* upper limit of table */
#define STEP     20  /* step size */


/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main()
{
    /* Implementation 1

    float fahr, celsius;
    int lower, upper, step;

    lower =   0;
    upper = 300;
    step  =  20;

    fahr = lower;

    printf("Fahr\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

        End Implementation 1 */

    /* Implementation       2 */

    printf("Fahr\tCelsius\n");

    for (int fahr = START; fahr <= STOP; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

    /* End implementation 2 */

}
