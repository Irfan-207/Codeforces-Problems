//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    ll n;
    cin >> n;
    if(n % 2 == 0){
        auto res = n - 4;
        cout << 4 << " " << res << endl;
    } else {
        auto res = n - 9;
        cout << 9 << " " << res << endl;
    }
    return 0;
}