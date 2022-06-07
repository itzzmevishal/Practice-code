// #include <stdio.h>
// int main()
// {
//     int table[10];
//     int n;
//     printf("Enter the number for table: ");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)
//     {
//         table[i] = n * (i + 1);
//         printf(" %d X  %d = %d\n", n, i + 1, table[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// void printTable(int *mulTable, int num, int n)
// {
//     printf("The multiplication table of %d is :\n", num);
//     for (int i = 0; i < n; i++)
//     {
//         mulTable[i] = num * (i + 1);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%dX%d = %d\n", num, i + 1, mulTable[i]);
//     }
//     printf("******************\n\n");
// }

// int main()
// {
//     int mulTable[3][10];
//     printTable(mulTable[0], 2, 10);
//     printTable(mulTable[1], 7, 10);
//     printTable(mulTable[2], 9, 10);

//     return 0;
// }

#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

int main() {
int a,b,c,d;
    printf("Enter the Sides: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
   if (a == b == c == d)
    {
        printf("YES");
    }
    else if (a == b && c == d){
        printf("YES");
    }
     else if (a == d && c == b){
          printf("YES");
     }
     else if (a == c && d == b){
          printf("YES");
     }
    else{
        printf("NO");
    }
       
    return 0;
}
