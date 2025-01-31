//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int a , b;
    cin >> a >> b;

    string S;
    cin >> S;

    if(S.length() != (a+b+1)){
        cout << "No\n";
        return 0;
    }

    if(S[a] != '-'){
        cout << "No\n";
        return 0;
    } 
    else {
        for (int i = 0; i < S.length() - 1; i++)
        {
            if(i != a){
                if(!isdigit(S[i])){
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }

    cout << "Yes\n";

    return 0;
}