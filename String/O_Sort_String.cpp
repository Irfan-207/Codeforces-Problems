//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    ll n;
    cin >> n;
    string S;
    cin >> S;
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if(S[i] > S[j]){
                char t = S[i];
                S[i] = S[j];
                S[j] = t;
            }
        }
        
    }
    
    cout << S << endl;



    
    return 0;
}