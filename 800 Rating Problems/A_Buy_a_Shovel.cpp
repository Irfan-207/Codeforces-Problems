//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    int k , r;
    cin >> k >> r;
    for (int i = 1; i <= 9; i++) {
        int res = k * i;
        int rem = res % 10;
        if(rem == r || res % 10 == 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}