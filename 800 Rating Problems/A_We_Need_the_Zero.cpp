//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
#define test int t; cin >> t; for (int T = 1; T <= t; T++)
#define inputVec for(int i = 0 ; i < num.size() ; i++)
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
        int n;
        cin >> n;
        vector<int> num(n);
        ll total_xor = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            total_xor ^= num[i];
        }
        
        if(n % 2 != 0) cout << total_xor << endl;
        else {
            if(total_xor == 0) cout << total_xor << endl;
            else cout << -1 << endl;
        }
    }
    
    return 0;
}