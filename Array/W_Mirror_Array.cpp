//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int row , col;
    cin >> row >> col;

    vector<vector<int> > vec(row , vector<int> (col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> vec[i][j];
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = col - 1; j >= 0; j--) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    


    
    return 0;
}