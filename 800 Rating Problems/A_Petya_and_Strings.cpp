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

    string str1 , str2 , s1 , s2;
    cin >> str1 >> str2;
    
    
    for(auto ch : str1){
        s1 += tolower(ch);
    }
    for(auto ch : str2){
        s2 += tolower(ch);
    }


    if(s1 < s2){
        cout << -1 << endl;
    } else if(s1 > s2){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}