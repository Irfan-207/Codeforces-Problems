//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
#define test int t; cin >> t; for (int i = 1; i <= t; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007

// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

int main(){
    optimize();
    test
    {
        string str;
        cin >> str;
        int idx1 = -1 , idx2 = -1;
        for (int i = 0; i < str.length(); i++) {
            if(str[i] == '1'){
                idx1 = i;
                break;
            }
        }
        for (int i = str.length() - 1; i >= 0; i--) {
            if(str[i] == '1'){
                idx2 = i;
                break;
            }
        }
        int cnt = 0;
        for (int i = idx1; i <= idx2; i++)
        {
            if(str[i] == '0'){
                cnt++;
            }
        }
        if((idx1 == -1) || (idx2 == -1)){
            cout << 0 << endl;
        } else {
            cout << cnt << endl;
        }
    }
    
    return 0;
}