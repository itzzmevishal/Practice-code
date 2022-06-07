#include <stdio.h>
int table(int n);

int main()
{
    int n;
    table(n);
    return 0;
}

int table(int n)
{
    printf("Enter the Number: ");
    scanf("%d", &n);
    printf("\n*******The Table Of %d is:******* \n\n", n);
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, i * n);
    }
}
