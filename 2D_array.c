#include <stdio.h>
// j =m-1
int main()
{
    int n, m, a[100][100], b[100][100], sum[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of column: ");
    scanf("%d", &m);

    printf("Enter the elements of 1st matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of two matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", sum[i][j]);

            if (j == m - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}