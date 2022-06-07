
#include<stdio.h>
int main()
{
int a,i,sum=0;
printf("Enter the Number to Sum:");
scanf("%d",&a);

for ( i = 1; i <= a; i++)
{
    sum+=i;
}
printf("Sum of First %d Numbers Is=%d",a,sum);
return 0;
}