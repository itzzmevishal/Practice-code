// //Max in three numbers.
// #include <stdio.h>
// int max(int a, int b, int c);
// int main()
// {
//     int a, b, c;
//     max(a, b, c);
//     return 0;
// }

// int max(int a, int b, int c)
// {
//     printf("Enter The number: ");
//     scanf("%d", &a);
//     printf("Enter The number: ");
//     scanf("%d", &b);
//     printf("Enter The number: ");
//     scanf("%d", &c);
//     if ((a > b) && (a > c))
//     {
//         printf("%d is Greater", a);
//     }
//     else if ((b > c) && (b > a))
//     {
//         printf("%d is Greater", b);
//     }
//     else
//     {
//         printf("%d is Greater", c);
//     }
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n = 8, sum;
    sum = (pow(i + 1, 2));
    for (i = 1; i <= n; i++)
    {
        printf("The square is %d\n", sum);
    }
    return 0;
}