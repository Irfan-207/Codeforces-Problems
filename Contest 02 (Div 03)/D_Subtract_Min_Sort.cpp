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
        ll n ;
        cin >> n;
        vector<ll> num(n);
        for (auto i = 0; i < n; ++i) {
            cin >> num[i];
        }
        int minimum = min(num[0] , num[1]);
        num[0] -= minimum;
        num[1] -= minimum;
        // sort(num.begin() , num.end());


        if(num[1] > num[0]){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    
        
    }
    



    
    return 0;
}