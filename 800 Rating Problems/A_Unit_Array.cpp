//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
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
        int n;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        
        int sum = accumulate(num.begin() , num.end() , 0);
        int mt = accumulate(num.begin() , num.end() ,  1, multiplies<int>());
        if(sum >= 0 && mt == 1){
            cout << 0 << endl;
        }else {
            int pos = 0 , neg = 0 , op = 0;
            for(auto U : num){
                if(U > 0){
                    pos ++;
                }else {
                    neg++;
                }
            }
            while (!(pos >= neg)) {
                pos++;
                neg--;
                op++;
            }
            if(neg % 2 != 0){
                op++;
            }
            cout << op << endl;
        }
    }
    
    return 0;
}