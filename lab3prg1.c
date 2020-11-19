/* Write a program that asks the user to enter a two - digit number, then prints the number with itsdigits reversed.
   A session with the program should have the following appearance:
*/

#include <stdio.h>

int main()
{
    int n, i, j;

    printf(" Enter a two-digit number :"); // Enter only two-digit numbers.
    scanf("%d", &n);

    i = n %10;

    j = n/10;

    printf("The reversal is : %d%d\n", i, j);

    return 0;
}