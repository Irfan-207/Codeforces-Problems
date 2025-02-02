//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main() {
    optimize();
    ll n, q;
    cin >> n >> q;

    vector<ll> num(n);
    vector<ll> prefixSum(n + 1, 0); 

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        prefixSum[i + 1] = prefixSum[i] + num[i]; 
    }

    for (int i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;

        if (l >= 1 && r <= n) {
            ll sum = prefixSum[r] - prefixSum[l - 1]; 
            cout << sum << endl;
        }
    }

    return 0;
}