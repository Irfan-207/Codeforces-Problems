//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int n;
    cin >> n;

    vector<ll> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    vector<ll> B(n);
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A.begin() , A.end());
    sort(B.begin() , B.end());

    bool permutation = true;
    for (int i = 0; i < n; i++)
    {
        if(A[i] != B[i]){
            permutation = false;
            break;
        }
    }
    
    if(permutation){
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    
    return 0;
}