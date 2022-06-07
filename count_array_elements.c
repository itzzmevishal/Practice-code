#include <stdio.h>
int main()
{
    
    int arr[]={2,33,13,43,43,1,34,34,3,13,133,3,3,31,34,3,13,463,35,654,354,3,354,3,34,35,34,35,34,3,68,6,5,654,6,6,546,546,546,4,657,64};

    printf("The Counted Number Is : %d",sizeof(arr)/sizeof(arr[0]));
    
    return 0;
}