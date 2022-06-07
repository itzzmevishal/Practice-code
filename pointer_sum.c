#include <stdio.h>
int addnum(int *num1, int *num2);

int main()
{
    //     int num1, num2, num3;
    //     printf("Enter the Two Numbers: \n ");
    // scanf("%d %d" ,&num1,&num2);
    // addnum(&num1,&num2);
    // printf("The Addition is %d  \n", num1+num2);

    // return 0;
    // }

    // int addnum(int *num1, int *num2)
    // {
    //     *num1 + *num2;
    //     return 0;
    // }

    int num1, num2, num3;
    printf("Enter the Two Numbers: \n ");
    scanf("%d %d", &num1, &num2);
    num3=(addnum(&num1, &num2));
    // num3(&num1,&num2);
    printf("The Addition is %d  \n", num3);

    return 0;
}

int addnum(int *num1, int *num2)
{
    int *num3;

    *num3 = *num1 + *num2;
    return *num3;
}