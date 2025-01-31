//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    ll row , col;
    cin >> row >> col;

    vector<vector<int> > vec(row , vector<int> (col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> vec[i][j];
        }
    }
    
    ll X;
    cin >> X;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(vec[i][j] == X){
                cout << "will not take number\n";
                return 0;
            }
        }
    }

    cout << "will take number\n";

    
    return 0;
}