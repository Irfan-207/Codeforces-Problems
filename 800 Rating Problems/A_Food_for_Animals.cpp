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
    ll t;
    cin >> t;
    while (t--) {
        ll df , cf , uf , d , c;
        cin >> df >> cf >> uf >> d >> c;
        if(df >= d && cf >= c){
            cout << "YES\n";
        } else {
            if(df < d){
                auto diff = d - df; // Difference between dog and dog food
                if(diff > uf){
                    cout << "NO\n";
                }else {    
                    uf -= diff; // after giving dog food Current uf
                    if(cf < c){
                        auto less = c - cf; // Difference between cat and cat food
                        if(less <= uf){
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    } else {
                        cout << "YES\n";
                    }
                }
            } else if(cf < c){
                auto diff = c - cf; // Difference between dog and dog food
                if(diff > uf){
                    cout << "NO\n";
                }else {
                    uf -= diff; // after giving cat food Current uf
                    if(df < d){
                        auto less = d - df;//Difference between cat and cat food
                        if(less <= uf){
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    } else {
                        cout << "YES\n";
                    }
                }

            }
        }

    }
    return 0;
}