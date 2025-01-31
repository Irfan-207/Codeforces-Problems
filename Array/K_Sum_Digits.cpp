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
    string num;
    cin >> num;

    vector<int> digit;
    for (int i = n - 1; i >= 0; i--)
    {
        int last_digit = num[i] - '0';
        digit.push_back(last_digit);
    }
    
    ll sum = 0;
    for(auto U : digit){
        sum += U;
    }
    cout << sum;
    return 0;
}