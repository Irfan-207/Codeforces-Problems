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
    for (auto i = 0; i < N; i++) {
        cin >> num[i];
    }
    for (auto i = 0; i < N-1; i++)
    {
        for (auto j = 0; j < N - 1 - i; j++)
        {
            if(num[j] > num[j+1]){
                swap(num[j] , num[j+1]);
            }
        }
        
    }
    for(auto U : num) {
        cout << U << " ";
    }


    
    return 0;
}