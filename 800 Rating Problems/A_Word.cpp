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

    string str;
    cin >> str;

    int upper = 0 , lower = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i])){
            upper++;
        }
        if(islower(str[i])){
            lower++;
        }
    }
    
    if(upper < lower){
        for(int i = 0; i < str.length(); i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
    } else if(upper > lower){
        for(int i = 0; i < str.length(); i++){
            if(islower(str[i])){
                str[i] = toupper(str[i]);
            }
        }

    }
    else {
        for(int i = 0; i < str.length(); i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
    }

    cout << str << endl;
    return 0;
}