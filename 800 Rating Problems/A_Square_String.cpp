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
    while (t--)
    {
        string str;
        cin >> str;
        if(str.length() % 2 != 0){
            cout << "NO\n";
        } else{
            int mid = str.length() / 2;
            bool square = true;
            string first , second;
            for (int i = 0; i <= mid - 1; i++) {
                first += str[i];
            }
            for (int j = mid; j <= str.length() - 1; j++) {
                second += str[j];
            }
            if(first == second){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    
    return 0;
}