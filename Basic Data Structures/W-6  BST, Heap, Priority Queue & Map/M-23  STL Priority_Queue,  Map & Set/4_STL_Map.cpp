#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // input type
    mp.insert({"Jamal", 01}); // Type-1;
    mp.insert({"Kamal", 02});

    mp["Karim"] = 03; // Type-2;
    mp["Rahim"] = 04;

    // output type
    for (auto it = mp.begin(); it != mp.end(); it++) // Type-1;
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << mp["Karim"] << endl; // Type-2

    if (mp.count("Kamal"))
        cout << "Ache";
    else
        cout << "Nai";

    return 0;
}