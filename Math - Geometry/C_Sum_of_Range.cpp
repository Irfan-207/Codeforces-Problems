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
    ll a , b;
    
    ll s = 0 , s1 = 0 , s2 = 0;
    cin >> a >> b;
    int maximum = max(a , b);
    int minimum = min(a , b);
    for (int i = minimum; i <= maximum; i++)
    {
        s += i;
        if(i % 2 == 0){
            s1 += i;
        } else {
            s2 += i;
        }
    }
    
    cout << s << endl << s1 << endl << s2 << endl;


    
    return 0;
}