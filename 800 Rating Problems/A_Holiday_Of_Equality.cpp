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

    int n;
    cin >> n;
    vector<ll> num;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }
    if(n == 1){
        cout << 0 << endl;
    } else {
        ll sum = 0;
        sort(num.begin() , num.end());
        auto mx = num[num.size() - 1];
        for(auto U : num){
            int res = mx - U;
            sum += res;
        }cout << sum << endl;
    }
    return 0;
}