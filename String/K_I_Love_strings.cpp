//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        string S , T;
       
        cin >> S >> T;
        int len = (S.length() > T.length()) ? S.length() : T.length();
        vector<char> res;

        for (int i = 0; i < len; i++)
        {
            if(i < S.length()){
                res.push_back(S[i]);
            }
            if(i < T.length()){
                res.push_back(T[i]);
            }
        }
        for(auto U : res){
            cout << U;
        } cout << endl;
    }
    
    
    return 0;
}