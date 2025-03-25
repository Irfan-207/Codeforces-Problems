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
    test 
    {
        int n;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        set<int> st(num.begin() , num.end());
        if(st.size() == 1){
            cout << "NO\n";
        } else {
            srt(num);
            swap(num[0] , num[n-1]);
            swap(num[1] , num[n-1]);
            cout << "YES\n";
            for(auto U : num){
                cout << U << " ";
            } cout << endl;
        }
    }
    return 0;
}