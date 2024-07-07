#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<"\n";
    sort(arr,arr+size,greater<int>());
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}