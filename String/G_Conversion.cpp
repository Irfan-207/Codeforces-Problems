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

    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] >= 65 && S[i] <= 90){
            int n = S[i];
            S[i] = n + 32;
            cout << S[i];
        } else if(S[i] >= 97 && S[i] <= 122){
            int n = S[i];
            S[i] = n - 32;
            cout << S[i];
        } else if(S[i] == ',') {
            cout << " ";
        }
    }
    

    return 0;
}