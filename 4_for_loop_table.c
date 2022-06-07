#include<stdio.h>
int main()
{
int n;
printf("Enter the Number \n");
scanf("%d",&n);
printf("\n*******The Table Of %d is:******* \n\n",n);

for(int i=1;i<=10;i++)
{
    printf("%d X %d = %d \n",n,i,i*n);
}
return 0;
}