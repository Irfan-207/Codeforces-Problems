//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n ;
        vector<int> num(n);
        int even = 0  , odd = 0 ; 
        bool need = false;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            if(num[i] % 2 == 1 && i % 2 == 0){
                even++;
            } else if(num[i] % 2 == 0 && i % 2 == 1){
                odd++;
            } 
        }
        int res = (even == odd) ? even : -1 ;
        cout << res << endl;
    }
    return 0;
}