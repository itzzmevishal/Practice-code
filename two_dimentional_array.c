// // Print Two Dimentional Array In MATRIX Form

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter the number Row: ");
//     scanf("%d", &num1);
//     printf("Enter the number Column: ");
//     scanf("%d", &num2);

//     int a[num1][num2];
//     for (int row = 0; row < num1; row++)
//     {
//         for (int column = 0; column < num2; column++)
//         {
//             scanf("%d", &a[row][column]);
//         }
//     }
//     printf("The elements in the array are: \n");
//     for (int row = 0; row < num1; row++)
//     {
//         for (int column = 0; column < num2; column++)
//         {
//             printf("%d ", a[row][column]);
//             if (column == num2 - 1)
//             {
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }

// Print Two Dimentional Array In MATRIX Form

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter the number Row: ");
//     scanf("%d", &num1);
//     printf("Enter the number Column: ");
//     scanf("%d", &num2);

//     int a[num1];
//     printf("Enter the Row: \n");
//     for (int row = 0; row < num1; row++)
//     {
//         scanf("%d", &a[row]);
//     }
//     int b[num2];
//     printf("Enter the Column: \n");
//     for (int column = 0; column < num2; column++)
//     {
//         scanf("%d", &b[column]);
//     }

//     printf("The elements in the array are: \n");
//     for (int row = 0; row < num1; row++)
//     {
//         for (int column = 0; column < num2; column++)
//         {
//             printf("%d ", a[row]);
//             if (column == num2 - 1)
//             {
//                 printf("\n");
//             }
//             printf("%d ", b[column]);
//             if (column == num2 - 1)
//             {
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the number Row: ");
    scanf("%d", &num1);
    printf("Enter the number Column: ");
    scanf("%d", &num2);
    printf("Enter the number K: ");
    scanf("%d", &num3);

    int a[num1][num2][num3];
    for (int row = 0; row < num1; row++)
    {
        for (int column = 0; column < num2; column++)
        {
            for (int k = 0; k < num3; k++)
            {
                scanf("%d", &a[row][column][k]);
            }
        }
    }
    printf("The elements in the array are: \n");
    for (int row = 0; row < num1; row++)
    {
        if (row==num1-1)
        {
           printf("\n");
        }
        
        for (int column = 0; column < num2; column++)
        {
            if (column==num2-1)
            {
                 printf("\n");
            }
            
            for (int k = 0; k < num3; k++)
            {
                printf("%d ", a[row][column][k]);
                if ( k == num3-1 )
                {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
