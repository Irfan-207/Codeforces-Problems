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

int main(){
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int a , b , c;
        cin >> a >> b >> c;
        int d1 = abs(a-1);
        int d2 = abs(b - c) + abs(c - 1);
        if(d1 < d2){
            cout << 1 << endl;
        } else if(d1 > d2){
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}