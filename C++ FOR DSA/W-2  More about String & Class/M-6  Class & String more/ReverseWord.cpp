#include <bits/stdc++.h>

using namespace std;
void PRINT(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        PRINT(ss);
        cout << word << endl;
    }
    // return;
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    PRINT(ss);
    return 0;
}