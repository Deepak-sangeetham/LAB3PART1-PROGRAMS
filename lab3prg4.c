/* Write a program that reads an integer entered by the user and displays it in octal(base 8):
*/

#include <stdio.h>

int main()
{
    int n, i, j, k, l, m, o, p, a;

    printf("Enter a number between 0 and 32767 : ");
    scanf("%d", &n);

    i = n % 8;

    j = n / 8;

    k = j % 8;

    l = j / 8;

    m = l % 8;

    o = l / 8;

    p =  o % 8;

    a = o / 8;


    printf("In octal, your number is : %d%d%d%d%d\n", a, p, m, k, i);

    return 0;




    

}