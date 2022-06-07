#include<stdio.h>
int main()
{
int num;
printf("Enter The Number:");
scanf("%d",&num);
if(num%25==0){
printf("The number is Divisible ");
}
else{
    printf("The Number is NOt Divisible");
}
return 0;
}