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
    ll n  , k;
    cin >> n >> k;
    int odd_numbers , even_numbers;
    if(n % 2 == 0){
        odd_numbers = n / 2;
        even_numbers = n / 2;
    }else {
        odd_numbers = (n + 1) / 2;
        even_numbers = (n - 1) / 2;
        
    }    
    return 0;
}