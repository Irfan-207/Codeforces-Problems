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
    string news ;
    cin >> news;
    string target = "heidi";
    if(news == "heidi"){
        cout << "NO\n";
    } else {
        string res = "";
        int n = 0;
        for (int i = 0; i < news.length(); i++)
        {
            if(news[i] == target[n]){
                n++;
                res += news[i];
            } 
            if(n == target.length()){
                break;
            }
        }
        if(res == target){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}