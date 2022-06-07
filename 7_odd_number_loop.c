#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter The Number Till You Want Odd Numbers: \n");
    scanf("%d",&n);
    
    printf("Odd Numbers from 1 to %d are: \n",n);

    for ( i=1; i < n; i++)
{
    if (i%2==1)    
    {
        printf("%d\n",i);
    }
    
}
return 0;
}