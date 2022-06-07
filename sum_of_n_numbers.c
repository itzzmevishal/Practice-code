#include<stdio.h>
int main()
{
int i,num,sum=0;
printf("Enter the 10 Numbers:\n");
for ( i = 1; i <= 10; i++)
{
    printf("The numbers is %d:",i);
    scanf("%d",&num);
    sum+=num;
}
printf("The sum of Numbers is:%d",sum);
return 0;
}