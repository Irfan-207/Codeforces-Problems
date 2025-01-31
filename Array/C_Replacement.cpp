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
    for (int i = 0; i < N; i++)
    {
        if(vec[i] > 0){
            vec[i] = 1;
        }
        else if(vec[i] < 0){
            vec[i] = 2;
        }
    }
    
    for(auto u : vec){
        cout << u << " ";
    }

    
    return 0;
}