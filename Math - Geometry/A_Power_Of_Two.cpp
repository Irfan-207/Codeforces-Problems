//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    int n ;
    cin >> n;
    if(n <= 0){
        cout << "NO\n";
        return 0;
    }

    double res = log2(n);
    
    if(floor(res) == res){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }


    
    return 0;
}