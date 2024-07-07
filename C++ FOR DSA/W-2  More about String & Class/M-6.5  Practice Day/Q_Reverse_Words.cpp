#include <bits/stdc++.h>

using namespace std;
// void PRINT(string word, int i)
// {
//     if (word[i] == '\0')
//         return;
//     PRINT(word, i + 1);
//     cout << word[i];
// }
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool a = false;
    while (ss >> word)
    {
        if (a)
        {
            cout << " ";
        }
        a = true;
        reverse(word.begin(), word.end());
        cout << word;
    }
    return 0;
}
// reverse(word.begin(),word.end());