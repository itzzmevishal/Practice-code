// #include <stdio.h>
// int main()
// {
//     int marks[5];
//     float avg = 0;
//     // avg = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
//     avg = (marks[] = {0, 1, 2, 3, 4}) / 5;

//     printf("Enter the marks of student 1: ");
//     scanf("%d", &marks[0]);
//     printf("Enter the marks of student 2: ");
//     scanf("%d", &marks[1]);
//     printf("Enter the marks of student 3: ");
//     scanf("%d", &marks[2]);
//     printf("Enter the marks of student 4: ");
//     scanf("%d", &marks[3]);
//     printf("Enter the marks of student 5: ");
//     scanf("%d", &marks[4]);

//     printf("The marks of the students are %d %d %d %d and %d\n",
//            marks[0], marks[1], marks[2], marks[3], marks[4]);

//     printf("The Average of All The Numbers Are %d", avg);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, i;
//     float num[100], sum = 0.0, avg;

//     printf("Enter the numbers of elements: ");
//     scanf("%d", &n);

//     while (n > 100 || n < 1) {
//         printf("Error! number should in range of (1 to 100).\n");
//         printf("Enter the number again: ");
//         scanf("%d", &n);
//     }

//     for (i = 0; i < n; ++i) {
//         printf("%d. Enter number: ", i + 1);
//         scanf("%f", &num[i]);
//         sum += num[i];
//     }

//     avg = sum / n;
//     printf("Average = %.2f", avg);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[100];
    int num, i, sum = 0;
    
    printf("Enter the number : \n");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter the number %d: \n",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum is : %d \n", sum);
    return 0;
}