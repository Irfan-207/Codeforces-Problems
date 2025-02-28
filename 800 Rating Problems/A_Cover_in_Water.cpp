//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
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
        int n ;
        cin >> n;
        string str;
        cin >> str;

        bool continue_empty_cell = false;
        int cnt = 0;
        
        for (int i = 0; i < n; i++)
        {
            if(str[i] == '.' && i < n && i + 1 < n && str[i+1] == '.' && i + 2 < n && str[i + 2] == '.'){
                continue_empty_cell = true;
                break;
            } if(str[i] == '.'){
                cnt++;
            }
        }

        if(continue_empty_cell){
            cout << 2 << endl;
        } else {
            cout << cnt << endl;
        }
    }
    



    
    return 0;
}