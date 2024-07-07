#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    i = n - 1;
    for (j = 0; j < m; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
    i = m - 1;
    for (j = 0; j < n; j++)
    {
        printf("%d ", a[j][i]);
    }
    return 0;
}