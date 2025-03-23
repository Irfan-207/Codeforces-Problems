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
        int n , k , x;
        cin >> n >> k >> x;
        int sum = 0;
        vector<int> num;
        if(x != 1){
            cout << "YES\n" << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            } cout << endl;
        } else  {
            if(k == 1 || (k == 2 && n % 2 == 1)){
                cout << "NO\n";
            } else {
                cout << "YES\n";
                if(n % 2 == 0){
                    cout << n / 2 << endl;
                    for (int i = 1; i <= n/2; i++) {
                        cout << 2 << " ";
                    } cout << endl;
                } else {
                    cout << (n - 3) / 2 + 1 << endl;
                    for (int i = 1; i <= (n-3) / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
    return 0;
}