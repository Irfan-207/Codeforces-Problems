//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    ll N;
    cin >> N;
    vector<ll> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    ll sum = 0;
    for(auto U : vec){
        sum += U;
    }
    cout << abs(sum);


    
    return 0;
}