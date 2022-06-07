#include<stdio.h>
int main()
{
float maths,physics,english,total;

printf("Enter the Maths Marks:\n");
scanf("%f",&maths);
printf("Enter the Physics Marks:\n");
scanf("%f",&physics);
printf("Enter the English Marks:\n");
scanf("%f",&english);

total=(physics+maths+english)/3;
if ((total<40) || physics<33 || maths<33 || english<33)
{
    printf("You Are Fail \n");
}
else 
     printf("You Are Pass \n");
return 0;
}