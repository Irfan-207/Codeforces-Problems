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

    string t = "EGYPT";
    int t_len = t.length();
    string res;
    for (int i = 0; i < S.length(); )
    {
         if (i <= S.length() - t_len && 
            S[i] == t[0] && S[i + 1] == t[1] && S[i + 2] == t[2] &&  S[i + 3] == t[3] && S[i + 4] == t[4]) {

            res += " "; 
            i += t_len; 
        } else {
            res += S[i];
            i++; 
        }
        
    }
    cout << res << endl;
    



    
    return 0;
}