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

    int s1 , s2 , k , m;
    cin >> s1 >> s2 >> k >> m;
    
    if(m > s2 || k > s1){
        cout << "NO\n";
        return 0;
    }

    vector<ll> num1(s1) , num2(s2);
    for (int i = 0; i < s1; i++) { 
        cin >> num1[i];
    }
    for (int i = 0; i < s2; i++) {
        cin >> num2[i];
    }
    if(num1[k-1] < num2[s2-m]){
		cout<<"YES";
	}
	else{
        cout<<"NO";
    }
    
    return 0;
}