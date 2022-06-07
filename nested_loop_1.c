#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter the horizontal numbers:");
    scanf("%d", &n);
    printf("Enter the vertical numbers:");
    scanf("%d", &m);

    for (j = 1; j <= m; j++)
    {
        for (i = 1; i <= n; i++)
        {
            printf("*  ");
        }
        
            printf("\n");
    }

    return 0;
}
