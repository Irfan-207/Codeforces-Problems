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
        int n;
        cin >> n;
        vector<ll> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        ll op = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if(num[i] <= num[i+1]){
                ll diff = num[i+1] - num[i];
                ll req_op = (diff / 2) + 1;
                op = min(req_op , op);
            } else {
                op = 0;
            }
        }
        cout << op << endl;
    }
    return 0;
}