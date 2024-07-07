#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m], flag = 1;
    if (n == m)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                        flag = 0;
                }
                else if ((i + j) == (n - 1))
                {
                    if (a[i][j] != 1)
                        flag = 0;
                }
                else if (a[i][j] != 0)
                    flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
        printf("NO\n");
    return 0;
}