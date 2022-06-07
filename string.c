#include <stdio.h>
#include <string.h>
int main()
{
    char str[100][100];
    int i;
   
    // int n;
    // printf("Enter the Number Of Users: ");
    // scanf("%d", &n);
    for ( i = 1; i <= 3; i++)
    {
        printf("Enter your Name: ");
        gets(str[i]);
    }
    for ( i = 1; i <= 3; i++)
    {

        printf("Your Name Is %s\n", str[i]);
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     char str[100];
//       scanf("%[^\n]s",str);
//       printf("%s",str);
//     return 0;
// }