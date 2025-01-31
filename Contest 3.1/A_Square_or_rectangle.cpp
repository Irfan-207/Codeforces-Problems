//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int t;
    cin >> t;

    while(t--){
        ll w , h;
        cin >> w >> h;

        if(w == h){
            cout << "Square\n";
        } else {
            cout << "Rectangle\n";
        }
    }



    
    return 0;
}