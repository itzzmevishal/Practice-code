//Number of Array elements Is Reapeted or Not.
//12324
#include<stdio.h>
int main()
{
int arr[10]={0};//{4,2,3,0,0,0,0,0,0,0}
int num,rem;
printf("Enter the number:");
scanf("%d",&num);

while(num>0)
{
    rem=num%10;//12
    if(arr[rem] == 1)
    break;
    arr[rem]=1;
    num=num/10;
}
if (num>0)
{
   printf("YES");
} 
else
{
    printf("NO");
}


return 0;
}