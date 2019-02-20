#include <stdio.h>
#include <stdlib.h>

/* Constant is a number that cant be modified  */

int main()
{
     const int NUM = 5; /* const int means the number cannot be modified, Constants are always written out as capitalized variables EX. NUM, FAV_NUM, ETC */
     printf("%d", NUM);
     printf("\n%d", NUM);

     printf("\nHello");/* Considered constants because we cannot change value without directly modifying the source */
     printf("\n%d", 70);

    return 0;
}
