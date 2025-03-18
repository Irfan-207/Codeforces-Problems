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
        int n;
        cin >> n;
        vector<int> num(n);
        map<int , int> mp;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            mp[num[i]]++;
        }
        vector<int> res;
        bool exist = false;
        for(auto U : mp){
            if(U.second >= 3){
                res.push_back(U.first);
                exist = true;
            }
        }
        sort(res.begin() , res.end());
        reverse(res.begin() , res.end());
        if(!exist){
            cout << -1 << endl;
        }else {
            cout << res[0] << endl;
        }

    }
    


    
    return 0;
}