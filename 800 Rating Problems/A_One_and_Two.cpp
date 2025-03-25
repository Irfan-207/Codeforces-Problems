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
        int n , one = 0 , two = 0;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            if(num[i] == 1) one++;
            else two ++;
        }
        if(one == n){
            cout << 1 << endl;
        } else if(two == n ){
            if(n % 2 == 0){
                cout << n / 2 << endl;
            } else {
                cout << -1 << endl;
            }
        } else{
            if(two % 2 == 0){
                int need = two / 2;
                int found = 0;
                for (int i = 0; i < n; i++)
                {
                    if(num[i] == 2){
                        found++;
                    }
                    if(found == need){
                        cout << i + 1 << endl;
                        break;
                    }
                }
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}