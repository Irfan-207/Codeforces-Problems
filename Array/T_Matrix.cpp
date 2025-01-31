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

    vector<vector<int> > matrix(N , vector<int> (N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int primary_diagonal = 0 , secondary_diagonal = 0;
    for (int i = 0; i < N; i++) {
        primary_diagonal += matrix[i][i]; 
        secondary_diagonal += matrix[i][N - 1 - i];
    }

    ll res = abs(primary_diagonal - secondary_diagonal);
    cout << res << endl;

    
    return 0;
}