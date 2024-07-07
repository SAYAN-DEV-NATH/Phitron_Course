#include <bits/stdc++.h>
using namespace std;

void marge(int a[], int l, int m, int r)
{
    int lsz = m - l + 1;
    int rsz = r - m;

    int k = 0;
    int L[lsz], R[rsz];
    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }

    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }

    int i = 0, j = 0;
    int cur = l;
    while (i < lsz && j < rsz)
    {
        if (L[i] <= R[j])
        {
            a[cur] = L[i];
            i++;
        }
        else
        {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }

    while (i < lsz)
    {
        a[cur] = L[i];
        i++;
        cur++;
    }

    while (j < rsz)
    {
        a[cur] = R[j];
        j++;
        cur++;
    }
}
void marge_sort(int a[], int l, int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;
        marge_sort(a, l, mid);
        marge_sort(a, mid+1, r);

        marge(a, l, mid, r);
    }
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    marge_sort(a, 0, n-1);

    for(int i=0; i<n; i++) cout << a[i] << " ";

    return 0;
}