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
    int n;
    cin >> n;
    cin.ignore();
    string text;
    getline(cin , text);
    vector<int> s;
    int l = 0;
    for (int i = 0; i < n; i++) {
        if(isupper(text[i])){
            l++;
        }
        if(text[i] == ' ' || i == n - 1){
            s.push_back(l);
            l = 0;
        }
    }
    auto mx = max_element(s.begin() , s.end());
    cout << (*mx) << endl;
    return 0;
}