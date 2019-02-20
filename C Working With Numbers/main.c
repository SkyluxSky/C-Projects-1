#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%f", 8.9); /* %f stands for a floating point number can be a double or a float basically a decimal number */

    printf("\n%f", 5.0 + 4.5); /* addition */
    printf("\n%f", 5.0 - 4.5); /* subtraction */
    printf("\n%f", 5.0 * 4.5); /* multiplication */
    printf("\n%f", 5.0 / 4.5); /* division */

    printf("\n%f", 5 + 4.5); /* adding an integer and float  */
    printf("\n%d", 5 + 4); /* adding two integers uses %d */
    printf("\n%f", 5 / 4.0); /* divide an integer and a float in order to get a decimal answer  */

    int num = 6;
    printf("\n%d", num); /* storing numbers in variables  */

    /* In C we have Functions we can call to perform higher level math  */

    printf("\n%f", pow(4, 3)); /* POW Function, power functions gives us answers to the power  */
    printf("\n%f", sqrt(49)); /* SQRT Function, square root functions gives us the square root of a number  */
    printf("\n%f", ceil(36.356)); /* CEIL Function, ceiling functions gives the rounded number of a decimal  */
    printf("\n%f", floor(36.356)); /* FLOOR Function, floor functions gives the rounded number below or zeros out the given decimal  */

    return 0;
}
