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
    int t;
    cin >> t;
    while (t--)
    {
        
        int n , k;
        cin >> n >> k;
        vector<ll> num(n);
        for (int i = 0; i < n; i++){
            cin >> num[i];
        }
        vector<ll> temp = num;
        sort(temp.begin() , temp.end());
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if(num[i] != temp[i]){
                possible  = false;
                break;
            }
        }
        
        if(possible){
            cout << "YES\n";
        } else {
            if(k == 1){
                cout << "NO\n";
            } else if(k <= n){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }


    
    return 0;
}