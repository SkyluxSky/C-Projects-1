#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30]; /* assign value to get a string from the user */
    printf("Enter Your Name: ");
    fgets(str, 30, stdin); /* fgets Function scans for a string from the user, stdin means standard input */
    printf("Your name is %s", str);

    char grade;
    printf("\nEnter Your Grade: ");/* Prompt User Input */
    scanf("%c", &grade);/* %c allows C to print a Character */
    printf("Your Grade is %c", grade); /* Statement gives users answer */

}
