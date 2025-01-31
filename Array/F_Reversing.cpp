//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int N;
    cin >> N;
    vector<ll> num(N);
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    reverse(num.begin() , num.end());
    for(auto U : num){
        cout << U << " ";
    }






    
    return 0;
}