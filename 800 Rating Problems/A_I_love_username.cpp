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
    // took help from a random coder "gvne"
    int n , cnt = 0;
    cin >> n;
    int first ;
    cin >> first;
    int max = first;
    int min = first;

    for (int i = 1; i < n; i++) {
        cin >> first;
        if(first > max){
            cnt ++;
            max = first;
        }   
        else if(first < min){
            cnt ++;
            min = first;
        }   
    }
    cout << cnt << endl;
    return 0;
}