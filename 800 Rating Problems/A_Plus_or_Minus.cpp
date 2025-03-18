//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

int main(){
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if(a + b == c){
            cout << '+';
        }else {
            cout << '-';
        } cout << endl;
    }
    return 0;
}