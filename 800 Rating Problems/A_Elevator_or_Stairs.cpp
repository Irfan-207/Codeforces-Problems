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
    int m , e , ele , t1 , t2 , t3;
    cin >> m >> e >> ele >> t1 >> t2 >> t3;
    
    // time for stairs
    int st = abs(m - e) * t1;

    // time for elevator
    int et = t3 + (t2 * abs(m - e)) + (t2 * abs(ele - m)) + (t3 * 2);

    if(et <= st){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}