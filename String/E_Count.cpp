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
    int sum = 0;
    for (int i = 0; i < S.length(); i++)
    {
        int digit = S[i] - '0';
        sum += digit;
    }
    cout << sum << endl;
    
    return 0;
}
