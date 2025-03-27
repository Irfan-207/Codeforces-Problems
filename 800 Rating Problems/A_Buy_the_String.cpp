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
        int n , c0 , c1 , h , total_cost = 0;
        cin >> n >> c0 >> c1 >> h ;
        string str;
        cin >> str;
        for(int i = 0; i < n; i++)
    	{
    		if(str[i]=='0')
    		{
    			if(h + c1 > c0) total_cost += c0; // the changing cost is expensive
                else total_cost += h + c1;
    		}
    		else
    		{
    			if(h + c0 > c1) total_cost += c1;
    			else total_cost += h + c0;
    		}
    	}
 
    	cout << total_cost << endl;
    }
    return 0;
}