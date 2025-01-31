//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    int s1 , s2;
    cin >> s1 >> s2;

    vector<ll> arr1(s1) , arr2(s2);

    for (int i = 0; i < s1; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < s2; i++) {
        cin >> arr2[i];
    }
    
    int j = 0;

    for (int i = 0; i < s1; i++)
    {
        if(j < s2 && arr1[i] == arr2[j]){
            j++;
        } if(j == s2){
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";

    
    return 0;
}