#include <stdio.h>
int addition();
int sub();
int even_odd();

int main()
{
    int a, b, c, d, num;
    printf("Enter the 1st Number:");
    scanf("%d", &a);
    printf("Enter the 2nd Number:");
    scanf("%d", &b);

    c = addition(a, b);
    printf("%d\n", c);

    d = sub(a, b);
    // printf("%d\n", d);

    c = even_odd(a, b);

    return 0;
}

int addition(int a, int b)
{
    int c;
    c = a + b;
    return (c);
}

int sub(int a, int b)
{
    int d;
    d = a - b;
     printf("%d\n", d);
    return (d);
}

int even_odd(int a, int b)
{
    int num;
    num = a + b;
    printf("%d + %d = %d \n", a, b, num);
    if (num % 2 == 0)
    {
        printf("And %d is even\n", num);
    }
    else
    {
        printf(" And %d is odd\n", num);
    }
    return 0;
}