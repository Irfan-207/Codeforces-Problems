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
   
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    int min_diff = abs (num[n-1] - num[0]);
    int idx1 = 1 , idx2 = n;
    for (int i = 0; i < n-1; i++) {
        int x = abs(num[i] - num[i+1]);
        if(x < min_diff) { // Took help from a cf handle : too_weak 
            idx1 = i + 1 ;
            idx2 = i + 2;
            min_diff = x;
        }
    }
   cout << idx1 << " " << idx2 << endl;
    return 0;
}