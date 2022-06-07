#include <stdio.h>

int fibonacci(int);
// 0 1 1 2 3 5 8 13 21 34

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}