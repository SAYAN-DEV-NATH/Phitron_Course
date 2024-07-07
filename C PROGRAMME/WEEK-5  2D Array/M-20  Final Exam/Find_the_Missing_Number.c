#include <stdio.h>

int main()
{
    long long test_case, m, a, b, c;
    scanf("%lld", &test_case);
    while (test_case--)
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long n = m;
        long long ans = a * b * c;
        long long result = m / ans;
        if (n == (result * a * b * c))
            printf("%lld\n", result);
        else
            printf("-1\n");
    }
    return 0;
}