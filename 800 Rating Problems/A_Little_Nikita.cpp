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
        int n , m;
        cin >> n >> m;
        if(n >= m && (n % 2 == m % 2)){
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }
    }
    return 0;
}