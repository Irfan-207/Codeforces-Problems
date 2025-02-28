//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string s;
    cin >> s; 
    string target = "hello"; 
    int j = 0;

    
    for (char c : s) {
        if (c == target[j]) {
            j++; 
            if (j == target.size()) {
                
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    
    cout << "NO" << endl;
    return 0;
}