//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    string S;
    getline(cin , S);

    vector<char> letter;
   
    for (int i = 0; i < S.length(); i++) {
        letter.push_back(S[i]);
    }
    map<char , int> mp;
    for(auto it : letter){
        mp[it]++;
    }
    for(auto it : mp){
        cout << it.first << " : " << it.second << endl;
    }
    
    

    return 0;
}