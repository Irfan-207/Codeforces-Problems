//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main() {
    optimize();
    ll n , k;
    cin >> n >> k;

    vector<ll> num(n);
    for (auto i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num.begin() , num.end());

    reverse(num.begin() , num.end());
    if(k == 1){
        cout << num[0] << endl;
        return 0;
    } else {
        ll sum = 0;
        for (auto i = 0; i < k; i++) {
            if(num[i] < 0){
                continue;
            }
            sum += num[i];
        }
        cout << sum << endl;
    }
    return 0;
}