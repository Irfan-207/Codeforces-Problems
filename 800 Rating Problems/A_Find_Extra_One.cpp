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

    int n ;
    cin >> n;
    int first_fourth = 0;
    int second_third = 0;
    while (n--)
    {
        int x , y;
        cin >> x >> y;
        if((x > 0 && y >= 0) || (x > 0 && y <= 0)){
            first_fourth++;
        } else {
            second_third++;
        }
    }
    if(!(second_third < 2 || first_fourth < 2)){
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
    return 0;
}