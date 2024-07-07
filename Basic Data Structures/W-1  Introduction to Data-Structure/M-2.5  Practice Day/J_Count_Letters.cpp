#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin>>s;
    // int cnt[26] = {0};
    // for(int i=0;i<s.size();i++){
    //     cnt[s[i]-'a']++;
    // }
    // for(char i='a';i<='z';i++){
    //     if(cnt[i-'a']!=0){
    //         cout<<i<<" : " << cnt[i-'a']<<endl;
    //     }
    // }

     string s;
    cin>>s;
    vector<int> cnt(26, 0);
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;
    }
    for(char i='a';i<='z';i++){
        if(cnt[i-'a']!=0){
            cout<<i<<" : "<<cnt[i-'a']<<endl;
        }
    }
    return 0;
}