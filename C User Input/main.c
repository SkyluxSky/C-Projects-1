#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age; /* Declare variable without a value */
    printf("Enter Your Age: ");/* Prompt User Input */
    scanf("%d", &age);/* Allows user to enter in information into the program, &age is a pointer that tells C where to store user input */
    printf("You are %d years old", age); /* Statement gives users answer */

    double gpa; /* Declare a double variable without a value */
    printf("\nEnter Your GPA: ");/* Prompt User Input */
    scanf("%lf", &gpa);/* %lf allows C to print a double */
    printf("Your GPA is %f", gpa); /* Statement gives users answer */

    char grade;
    printf("\nEnter Your Grade: ");/* Prompt User Input */
    scanf("%c", &grade);/* %c allows C to print a Character */
    printf("Your Grade is %c", grade); /* Statement gives users answer */

    char name[20]; /* assign value to get a string from the user */
    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Your name is %s", name);

    char str[30]; /* assign value to get a string from the user */
    printf("Enter Your Name: ");
    fgets(str, 30, stdin); /* fgets Function scans for a string from the user, stdin means standard input */
    printf("Your name is %s", str);

    return 0;
}
