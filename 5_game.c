#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int num,guess,attempts=1;
srand(time(0));
num=rand()%100+1;
//printf("The number is %d \n",num);
do
{
    printf("Guess the Number Between 1 To 100 \n");
    scanf("%d",&guess);
    if(guess<num)
    printf("Enter the Higher Number\n");
    else if(guess>num)
    printf("Enter the Lower Number \n");
    else
    {
        printf("You Guessed it in %d attempts \n",attempts);
    }
    attempts++;
}
while(guess!=num);
return 0;
}