//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
#define test int t; cin >> t; while(t--)
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
    string str;
    cin >> str;
    bool magic = true;
    for (int i = 0; i < str.length(); ) {
        if(str[i] == '1' && str[i + 1] == '4' && str[i + 2] == '4'){
            i += 3;
        } else if(str[i] == '1' && str[i+1] == '4'){
            i += 2;
        } else if(str[i] == '1'){
            i++;
        } else {
            magic = false;
            break;
        }
    }
    if(magic){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}