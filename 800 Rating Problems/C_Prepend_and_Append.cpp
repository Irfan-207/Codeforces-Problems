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
    test 
    {
        int n;
        string str;
        cin >> n >> str;
        int len = str.length();
        if(str[len - 1] == str[0]){
            cout << str.length() << endl;
        }else {
            int f = 0 , l = len - 1;
            while (f < l) {
                if(f != l){
                    if(str[f] == str[l]){
                        break;
                    }
                    else if(str[f] != str[l]){
                        len -= 2;
                    }
                }
                f++;
                l--;
            }
            cout << len << endl;
        }
    }
    return 0;
}