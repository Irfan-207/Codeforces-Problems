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

    string str;
    cin >> str;
    // if(str.length() < 7){
    //     cout << "NO\n";
    // }else {
        for (int i = 0; i <= (int)str.length()-8; i++)
        {
            bool zero = true , one = true;
            for (int j = 0; j < 8; j++)
            {
                if(str[i+j] != '0'){
                    zero = false;
                }if(str[i+j] != '1'){
                    one = false;
                }
            }
            if(zero || one){
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
    // }
    


    
    return 0;
}