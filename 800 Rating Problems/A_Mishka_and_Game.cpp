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
    int mk = 0 , ch = 0;
    while (t--) {
        int m , c;
        cin >> m >> c;
        if(m > c){
            mk++;
        } else if(m < c){
            ch++;
        }
    }
    if(mk == ch){
        cout << "Friendship is magic!^^\n";
    } else if(mk > ch){
        cout << "Mishka\n";
    } else {
        cout << "Chris\n";
    }
    return 0;
}