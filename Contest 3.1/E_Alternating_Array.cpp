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
    vector<ll> num(n);
    
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int op1 = 0 , op2 = 0;
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0){
            if(num[i] < 0){
                op1++;
            } 
            if(num[i] > 0){
                op2++;
            }
        }else {
            if(num[i] > 0){
                op1++;
            } 
            if(num[i] < 0){
                op2++;
            }
            
        }
    }
    
    int res = min(op1 , op2);
    cout << res << endl;


    
    return 0;
}