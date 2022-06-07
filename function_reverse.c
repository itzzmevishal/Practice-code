//reverse array elemrnts using function.
#include <stdio.h>
int rev(int num, int i);

int main()
{
    int i, num;
   int arr[num];
    printf("Enter the number you want to reverce :");
    scanf("%d", &num);
    rev(num, i);
    return 0;
   
}

int rev(int num, int i)
{
   int arr[num];
   
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
}


//reverse number using function.
// #include<stdio.h>

// int reverse(int n){
//    int sum=0;
//    while (n!=0){
//      sum = sum*10 + n%10;
//      n /= 10;
//    }
//    return sum;
// }
// void main()
// {  
//    int n;
//    printf("Enter any number: ");
//    scanf("%d", &n);
//    reverse(n);
//    printf("The number reversed: %d", reverse(n));
// }