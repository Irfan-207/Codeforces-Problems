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

    string str1 , str2 , str3;
    cin >> str1 >> str2 >> str3;
    
    int len1 = str1.length() , len2 = str2.length() , len3 = str3.length();
    if(len1 + len2 != len3){
        cout << "NO\n";
    } else {
    unordered_map<char, int> freq;
    
    for (char c : str1) freq[c]++;
    for (char c : str2) freq[c]++;
    for (char c : str3) freq[c]--;

    for (auto it : freq) {
        if (it.second != 0) {
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << "YES\n";
    }
    return 0;
}