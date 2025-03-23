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
    while (t--) {
        int n;
        cin >> n;
        vector<int> num(n);
        vector<int> bs;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if(num[i] == 0){
                x++;
                if(num[i+1] != 0){
                    bs.push_back(x);
                    x = 0;
                }
            }
        }
        bs.push_back(x);
        auto mx = max_element(bs.begin() , bs.end());
        cout << (*mx) << endl;   
    }
    return 0;
}