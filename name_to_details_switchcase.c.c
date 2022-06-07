#include<stdio.h>
int main()
{
char rating;
printf("Enter the Names:-");
scanf("%c",&rating);
switch (rating)
{
case 'a': 
 printf("He Is a student of DIATM\n");
    break;
case 'v':
 printf("He Is a student of VJS\n");
    break;
case 'm':
 printf("She Is a student of West Bengal\n");
    break;

default:
printf("INVALID\n");
    break;
}
return 0;
}