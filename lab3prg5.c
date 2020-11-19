/* Rewrite the upc.c program of section 4.1 so that the user enters 11 digits at one time,
    instead of entering one digit, then five digits, and then another five digits.
*/

#include <stdio.h>

int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total, adjusted_total, remainder, check_digit;

    printf("Enter the first 11 digits : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    

    
    first_sum = d + i2 + i4 + j1 + j3 + j5;

    second_sum = i1 + i3 + i5 + j2 + j4;

    total = (3 * first_sum) + second_sum;

    adjusted_total = total - 1;

    remainder = adjusted_total % 10;

    check_digit = 9 - remainder;

    printf("Check digit : %d\n", check_digit);

    return 0;
}