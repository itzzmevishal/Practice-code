//To Check Vowel And Consonent.
// #include <stdio.h>
// int main()
// {
//     char c;

//     printf("Enter The Character: ");
//     scanf("%c", &c);
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//     {
//         printf("%c This Is Vowel",c);
//     }
//     else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//     {
//         printf("%c This Is Vowel",c);
//     }

//     else
//     {
//         printf("%c This Is Consonant",c);
//     }
//     return 0;
// }



//To Check Vowel And Consonent using function.
#include <stdio.h>
char vowel_consonent(char c);
int main()
{
    char c;

    printf("Enter The Character: ");
    scanf("%c", &c);
   vowel_consonent(c);
    return 0;
}

char vowel_consonent(char c)
{
     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c  Is Vowel",c);
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("%c Is a Vowel",c);
    }

    else
    {
        printf("%c Is Consonant",c);
    }
}