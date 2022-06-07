#include<stdio.h>
int main()
 { 
float principle, time, rate, SI;
 	
printf("Enter the principle : "); 
scanf("%f", &principle); 

printf("Enter the time : "); 
scanf("%f", &time); 

printf("Enter the rate : "); 
scanf("%f", &rate);

SI=(principle*time*rate)/100;

printf("Your Interest is:%.3f\n",SI);
printf("The Total Money is:%.3f\n",principle+SI);
 	printf("-------------------------------------");
return 0;
 }