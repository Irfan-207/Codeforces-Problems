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
        ll n;
        cin >> n;
        vector<ll> num(n);
        int even = 0 , odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            if(num[i] % 2 == 0){
                even++;
            } else {
                odd++;
            }
        }
            
        if(n % 2 != 0){
            cout << -1 << endl;
        } else {
            ll op = abs(even - odd) / 2;
            cout << op << endl;
        }
    }
    return 0;
}