//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int q;
    string str;
    cin >> q >> str;

    vector<char> res;
    if(q == 1){
        
        for (int i = 0; i < str.length(); i++)
        {
            int index = original.find(str[i]);
            if(index != string::npos){
                res.push_back(key[index]);
            }
        }
        
    } else if(q == 2){
        

        for (int i = 0; i < str.length(); i++)
        {
            int index = key.find(str[i]);
            if(index != string::npos){
                res.push_back(original[index]);
            }
        }
    }
    for(auto U : res){
        cout << U;
    }
cout << endl;

    
    return 0;
}