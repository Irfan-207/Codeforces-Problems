//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    string str;
    cin >> str ;
    char ch = toupper(str[0]);
    str[0] = ch;
    cout << str << endl;


    
    return 0;
}