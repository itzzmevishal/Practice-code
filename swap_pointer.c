#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter the value\n");
    scanf("%d", &a);
    printf("Enter the value\n");
    scanf("%d", &b);
    swap(&a, &b);
    printf("The swap value is %d and %d", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}