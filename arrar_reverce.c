// //Reverse in c using array

// #include <stdio.h>
// int main()
// {
//     int i, num;
//     int arr[num];
//     printf("Enter the number you want to reverce :");
//     scanf("%d", &num);
//     printf("Enter the number:\n");

//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("\n");

//     for (i = num-1 ; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Reverse in c using array

// #include <stdio.h>
// int main()
// {
//     int arr[10] = {2,5,6,7,8,9,6,4,8,7};
//     int i;
//     printf("Original Order:\n");
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("Reversed Order:\n");
//     for (i = 10-1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, num;
    int arr[num];
    printf("Enter the number you want to reverce :");
    scanf("%d", &num);
    printf("Enter the number:\n");
    i = 0;
    while (i < num)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("\n");
    for (i = num - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}