#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test_case, n, i, j;
    scanf("%d", &test_case);
    while (test_case--)
    {
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    return 0;
}