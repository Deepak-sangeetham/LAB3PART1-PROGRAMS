/* European countries use a 13-digit code, known as European Article Number(EAN)
    instead of the 12-digit Universal Product Code(UPC) found in North America. Each EAN
    ends with a check digit, just as a upc does.
*/

#include <stdio.h>

int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6,
        first_sum, second_sum, total, adjusted_total, remainder, check_digit;

    printf("Enter the first 12 digits : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);
    

    
    second_sum = d + i2 + i4 + j1 + j3 + j5;

    first_sum = i1 + i3 + i5 + j2 + j4  + j6;

    total = (3 * first_sum) + second_sum;

    adjusted_total = total - 1;

    remainder = adjusted_total % 10;

    check_digit = 9 - remainder;

    printf("Check digit : %d\n", check_digit);

    return 0;
}