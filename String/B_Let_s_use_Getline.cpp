//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string S;
    getline(cin , S);
    ll len = S.length();

    for (int i = 0; i < len; i++)
    {
        if(S[i] == '\\'){
           return 0;
        } else {
            cout << S[i];
        }
    }
    
    return 0;
}