//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define mod 1000000007

// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

int main(){
    optimize();
    string pass;
    cin >> pass;
    int len = 0 , capital = 0 , small = 0 , digit = 0;
    if(pass.length() >= 5){
        len ++;
    }
    for (int i = 0; i < pass.length(); i++)
    {
        if(isupper(pass[i])){
            capital++;
        } else if(islower(pass[i])){
            small++;
        }else if(pass[i] >='0' && pass[i] <= '9'){
            digit++;
        }
    }
    if(len && capital && small && digit){
        cout << "Correct\n";
    } else {
        cout << "Too weak\n";
    }
    return 0;
}