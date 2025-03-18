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
    while (t--)
    {
        int rating ;
        cin >> rating ;
        if(rating <= 1399){
            cout << "Division 4\n";
        } else if(rating >= 1400 && rating <= 1599) {
            cout << "Division 3\n";
        } else if(rating >= 1600 && rating <= 1899){
            cout << "Division 2\n";
        } 
        else if(rating >= 1900){
            cout << "Division 1\n";
        } 
    }
    return 0;
}