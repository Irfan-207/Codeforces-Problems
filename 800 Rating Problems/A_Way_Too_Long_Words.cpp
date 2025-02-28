//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string S;
        getline(cin , S);

        if(S.length() <= 10){
            cout << S << endl;
        } else {
            int len = S.length();
            int count = len - 2;
            cout << S[0] << count << S[len-1] << endl;
        }
    
    }
    return 0;
}