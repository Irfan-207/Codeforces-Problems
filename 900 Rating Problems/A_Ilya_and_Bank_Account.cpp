//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;

int main(){
    optimize();

    ll n;
    cin >> n;
    if(n >= 0){
        cout << n << endl;
    }else {
        string str = to_string(n);
        reverse(str.begin() , str.end());
        int last = str[0] - '0';
        int second_last = str[1] - '0';
        
        if(last >= second_last){
            str.erase(str.begin());
        } else {
            str.erase(str.begin()+1);
        }
        reverse(str.begin() , str.end());
        if(str[1] != '0'){
            cout << str << endl;
        }else {
            str.erase(str.begin());
            cout << str << endl;
        }
    }
    return 0;
}