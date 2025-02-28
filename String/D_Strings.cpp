//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string S , T;
    getline(cin , S);
    getline(cin , T);
    cout << S.length() << " " << T.length() << endl << S+T << endl;
    char str = S[0];
    S[0] = T[0];
    T[0] = str;
    cout << S << " " << T << endl;

    return 0;
}