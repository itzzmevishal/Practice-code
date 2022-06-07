#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b, int d); // function prototype declaration
int sub(int a, int b, int d); // function prototype declaration

int main()
{
    int a, b, d, cat,dog;
    printf("Enter the 1st number:");
    scanf("%d", &a);
    printf("Enter the 2nd number:");
    scanf("%d", &b);
    printf("Enter the 3rd number:");
    scanf("%d", &d);
    cat = sum(a, b, d); // function call
    dog= sub(a, b, d);
    printf("The value of c is %d\n", cat);
    printf("The value of d is %d\n", dog);
    return 0;
}

int sum(int a, int b, int d)
{
    int c;
    c = a + b + d;
    return c;
}
int sub(int a, int b, int d)
{
    int c;
    c = (a - b) - d;
    return c;
}