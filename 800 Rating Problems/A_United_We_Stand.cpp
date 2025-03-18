//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define mod 1000000007

// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

int main() {
    optimize();
    int t;
    cin >> t;

    while (t--) {
        ll n ;
        cin >> n;
        vector<ll> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        ll mx = *max_element(num.begin() , num.end());
        vector<ll> b , c;
        for(auto U : num){
            if(U == mx){
                c.push_back(U);
            }else {
                b.push_back(U);
            }
        }
        if(b.size() == 0){
            cout << -1 << endl;
        } else {
            cout << b.size() << " " << c.size() << endl;
            for(auto U : b){
                cout << U << " ";
            } cout << endl;
            for(auto U : c){
                cout << U << " ";
            } cout << endl;
        }
    }
    return 0;
}