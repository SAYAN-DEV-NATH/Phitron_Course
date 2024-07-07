#include <bits/stdc++.h>
using namespace std;
void insertMinHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int currentIndex = v.size() - 1;
    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[currentIndex] < v[parentIndex])
        {
            swap(v[currentIndex], v[parentIndex]);
            currentIndex = parentIndex;
        }
        else
        {
            break;
        }
    }
}

void deleteMinHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int currentIndex = 0;
    while (true)
    {
        int leftIndex = currentIndex * 2 + 1;
        int rightIndex = currentIndex * 2 + 2;
        int lastIndex = v.size() - 1;

        if (leftIndex <= lastIndex && rightIndex <= lastIndex)
        {
            if (v[leftIndex] <= v[rightIndex] && v[leftIndex] < v[currentIndex])
            {
                swap(v[currentIndex], v[leftIndex]);
                currentIndex = leftIndex;
            }
            else if (v[rightIndex] <= v[leftIndex] && v[rightIndex] < v[currentIndex])
            {
                swap(v[rightIndex], v[currentIndex]);
                currentIndex = rightIndex;
            }
            else
            {
                break;
            }
        }
        else if (leftIndex <= lastIndex)
        {
            if (v[leftIndex] < v[currentIndex])
            {
                swap(v[leftIndex], v[currentIndex]);
                currentIndex = leftIndex;
            }
            else
            {
                break;
            }
        }
        else if (rightIndex <= lastIndex)
        {
            if (v[rightIndex] < v[currentIndex])
            {
                swap(v[rightIndex], v[currentIndex]);
                currentIndex = rightIndex;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void print(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertMinHeap(v, x);
    }
    deleteMinHeap(v);
    print(v);
    deleteMinHeap(v);
    print(v);
    return 0;
}