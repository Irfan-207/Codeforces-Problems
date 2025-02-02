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
    
    int start = 0 , end = n - 1;

    while (start <= end)
    {
        cout << num[start] << " ";
        start ++;

        if(start <= end){
            cout << num[end] << " ";
            end--;
        }
    }
    
    cout << endl;
    return 0;
}