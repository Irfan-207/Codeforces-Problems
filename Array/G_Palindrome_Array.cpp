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
    vector<ll> reversed_num(N);
    for (auto i = 0; i < N; i++) {
        cin >> num[i];
    }
    reversed_num = num;
    reverse(reversed_num.begin() , reversed_num.end());

    for (auto i = 0; i < N; i++)
    {
        if(reversed_num[i] != num[i]){
          
            cout << "NO";
            return 0;
        }
    }

        cout << "YES";
    


    
    return 0;
}