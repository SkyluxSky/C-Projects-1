#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World\n");/* printf(); is a function */
    printf("\nHello\nWorld\n");/* \n puts font on new line */
    printf("\nHello\"World");/* \" creates " in text */
    printf("\nMy Favorite Number is %d", 500);/* Percentd(%d) allows you to print an integer */
    printf("\nMy Favorite %s is actually %d", "Number" , 23);/* Percents (%s) allows you to print a character or string */
    printf("\nMy Favorite %s is actually %f", "Number" , 2.3456213);/* Percentf (%f) allows you to print a decimal number */

    int favNum = 24;
    char MyChar = 'i';
    printf("\nMy Favorite %s can be %d", "Number" , favNum);/* int sets variable to 24 then prints for %d */
    printf("\nMy Favorite %c can be %d", MyChar , favNum);/* char sets variable to i then prints for %c */

    return 0;
}
