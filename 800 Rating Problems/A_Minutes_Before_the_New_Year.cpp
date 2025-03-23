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
    while (t--) {
        int need = 24 * 60;
        int hr , mn;
        cin >> hr >> mn;
        int res = (hr * 60) + mn;
        cout << need - res << endl;
    }
    return 0;
}