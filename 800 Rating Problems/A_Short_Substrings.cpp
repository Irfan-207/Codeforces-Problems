//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
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
    int t;
    cin >> t;
    while (t--) {
        string b , a;
        cin >> b;
        char last = b.back();
        for (int i = 0; i < b.length()-1; i++) {
            if(b[i] != b[i+1]){
                a += b[i];
            } else if(b[i] == b[i+1]){
                a += b[i];
                i++;
            }
        }
        a += last;
        cout << a << endl;
    }
    return 0;
}