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
    vector<ll> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    ll X;
    cin >> X;
    for (int i = 0; i < N; i++)
    {
        if(vec[i] == X){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 <<endl;

    
    return 0;
}