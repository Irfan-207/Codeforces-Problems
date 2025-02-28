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

    int s;
    cin >> s; 
    
    vector<pair<int , int>> num(s);
    for (int i = 0; i < s; i++) {
        cin >> num[i].first >> num[i].second;
    }
    vector<int> res;
    int p;
    for (int i = 0; i < s - 1; i++) {
        if(i == 0){
            p = num[i].first + num[i].second;
            res.push_back(p);
        }
        p  = p - num[i+1].first + num[i+1].second;
        res.push_back(p);
    }
    sort(res.begin() , res.end());
    reverse(res.begin() , res.end());
    cout << endl << res[0] << endl;
    
    
    return 0;
}