//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
#define test int t; cin >> t; for (int i = 1; i <= t; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007

// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

int main(){
    optimize();
    vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n , m;
    cin >> n >> m;
    if(m == 50){
        cout << "NO\n";
        return 0;
    }
    for(int i = 0 ; i < prime.size() - 1 ; i++){
        if(prime[i] == n && prime[i + 1] == m){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}