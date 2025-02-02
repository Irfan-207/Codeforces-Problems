//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    ll n , q;
    cin >> n >> q;
    
    vector<ll> num(n);
    set<ll> my_set;
    
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for(auto it : num){
        my_set.insert(it);
    }

    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        if(my_set.find(x) != my_set.end()){
            cout << "found\n" ;
        } else {
            cout << "not found\n";
        }
    }
    


    
    return 0;
}