//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string S , W = ""; 
    getline(cin, S);
    vector<string> words;
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] != ' '){
            W += S[i];
        } else {
            if(!W.empty()){
                words.push_back(W);
                W = "";
            }
        }
    }
    if(!W.empty()){
        words.push_back(W);
    }
    for (int i = 0; i < words.size(); i++)
    {
        reverse(words[i].begin() , words[i].end());
        cout << words[i];
        if(i < words.size() - 1){
            cout << " ";
        }
    }
    
    cout << endl;
    return 0;
}