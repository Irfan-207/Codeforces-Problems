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

    string str;
    cin >> str;
    vector<int> rec;
    map<char , int> mp;
    for(auto ch : str){
        if(ch == 'n' || ch == 'i' || ch == 't' || ch == 'e'){
            mp[ch]++;
        }
    }
    mp['n'] = (mp['n'] - 1) / 2;  
    mp['e'] /= 3;  
    
    rec.push_back(mp['n']);
    rec.push_back(mp['i']);
    rec.push_back(mp['t']);
    rec.push_back(mp['e']);
    
    sort(rec.begin(), rec.end());
    cout << rec[0] << endl;    
    return 0;
}