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
        ll n;
        cin >> n;
        auto x = n / 2;
        if(x % 2 != 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";
            vector<int> num;
            for (int i = 2; i <= x * 2;) {
                num.push_back(i);
                i += 2;
            }
            auto sum1 = accumulate(num.begin() , num.end() , 0);
            auto ini = 1;
            for (int i = 1; i < x; i++) {
                num.push_back(ini);
                ini += 2;
            }
            auto sum2 = accumulate(num.begin() + x, num.end() , 0);
            auto r = abs(sum1 - sum2);
            num.push_back(r);
            for(auto U : num){
                cout << U << " ";
            } cout << endl;
        }
    }
    return 0;
}