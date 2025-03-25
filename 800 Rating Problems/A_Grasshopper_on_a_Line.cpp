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
        int n , k;
        cin >> n >> k;
        if(n % k != 0){
            cout << 1 << endl << n << endl;
        } else {
            int sum = 0 , op = 0;
            vector<int> num , res;
            num.push_back(1);
            int max_dis = n - 1;
            while (max_dis % k != 0) {
                num.push_back(max_dis);
                max_dis--;
            }
            for(auto U : num){
                sum += U;
                if(sum <= n){
                    res.push_back(U);
                }
            }
            cout << res.size() << endl;
            for(auto U : res){
                cout << U << " ";
            } cout << endl;
        }
    }
    
    return 0;
}