/**
 * C program to print natural numbers using do while loop
 */

#include <stdio.h>

int main()
{
    int n=1;

    do
    {
        printf("%d\n", n);
        n++;

    } while(n <= 10); 

    return 0;
}