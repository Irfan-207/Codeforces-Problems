//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
     string x, y;
    cin >> x >> y;
    if (x < y) {
        cout << x << endl;
    } else {
        cout << y << endl;
    }
    return 0;
}