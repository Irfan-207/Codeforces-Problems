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
        double a , b , c;
        cin >> a >> b >> c;

        double res = (a + b + c) / 3;
        res = ceil(res);
        cout << res << endl;
    }
    


    
    return 0;
}