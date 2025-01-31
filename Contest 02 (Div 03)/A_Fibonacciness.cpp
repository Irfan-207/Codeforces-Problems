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
        int a , b , d , e;
        cin >> a >> b >> d >> e;
        int ans = 0;
        for (int c = -200; c <= 200 ; c++)
        {
            ans = max(ans , (c == a+b) + (d == b + c) + (e == c + d));
        }
        cout << ans << endl;
    }
    



    
    return 0;
}