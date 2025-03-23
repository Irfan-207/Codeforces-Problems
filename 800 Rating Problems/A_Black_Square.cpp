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
    vector<int> num;
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    } 
    string str;
    cin >> str;
    int total = 0;
    for (int i = 0; i < str.length(); i++) {
        int idx = str[i] - '0';
        total += num[idx - 1];
    }   
    cout << total << endl;
    return 0;
}