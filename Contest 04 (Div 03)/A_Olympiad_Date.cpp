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
        for (int i = 0; i < n; i++){
            cin >> num[i];
        }
        if (n < 8) 
        { 
            cout << 0 << endl;
            continue;
        } else 
        {
            int zero = 0 , one = 0 , two = 0 , three = 0 , five = 0;
            for (int i = 0; i < n; i++) {
                int x = num[i];
                if (x == 1) one = 1;
                else if (x == 2 && two < 2) two++;
                else if (x == 3) three = 1;
                else if (x == 5) five = 1;
                else if (x == 0 && zero < 3) zero++;
                
                if(one == 1 && two == 2 && three == 1 && five == 1 && zero == 3){
                    cout << i + 1 << endl;
                    break;
                } 
                if (i == n -1) cout << 0 << endl;          
            }
        }
    }
    return 0;
}