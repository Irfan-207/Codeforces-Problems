//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
#define srt(x) sort(x.begin() , x.end()) //sort a vector
#define rev(x) reverse(x.begin() , x.end()) // reverse a vector
#define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
#define test int t; cin >> t; for (int T = 1; T <= t; T++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007

// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

// created my own keyboard hehehe 
vector<vector<char>> key = {
    {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
    {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
    {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}
};

// return a character for the each character in the string
char original(char c , char shift){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if(key[i][j] == c && shift == 'R'){
                return key[i][j-1];
            }
            else if(key[i][j] == c && shift == 'L'){
                return key[i][j+1];
            }
        }
    }
}

int main(){
    optimize();
    char c;
    cin >> c;
    string m;
    cin >> m;
    if(c == 'R'){
        for (int i = 0; i < m.length(); i++) {
            cout << original(m[i] , 'R');
        }
        
    } else {
        for (int i = 0; i < m.length(); i++) {
            cout << original(m[i] , 'L');
        }
    }cout << endl;
    return 0;
}