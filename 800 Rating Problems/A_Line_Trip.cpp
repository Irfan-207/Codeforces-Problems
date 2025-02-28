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
        int n , x;
        cin >> n >> x;
        vector<int> stat;
        stat.push_back(0);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            stat.push_back(k);
        }
        stat.push_back(x);
        
        vector<int> res;

        for (int i = 0; i < stat.size() - 1; i++)
        {
            int c;
            if(i+1 == stat.size() - 1){
                c =  2 * (stat[i+1] - stat[i]);
            } else {
                c = stat[i+1] - stat[i];
            }
            
            res.push_back(c);
        }
        sort(res.begin() , res.end());
        reverse(res.begin() , res.end());
        cout << res[0] << endl;
        
    }
    


    
    return 0;
}