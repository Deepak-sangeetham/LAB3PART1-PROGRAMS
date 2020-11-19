/* Extend the program in programming project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter a three-digit number :");
    scanf("%d", &n);

    i = n % 10;

    j = (n / 10) % 10;


    k = n / 100 ;

    printf("The rversal is : %d%d%d\n", i, j, k);

    return 0;
}