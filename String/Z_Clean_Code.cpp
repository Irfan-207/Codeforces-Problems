//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    cin.ignore();
    string code;
    vector<string> str;
    
    while (getline(cin , code))
    {
        str.push_back(code);
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == "///"){
            continue;
        }        
        if(str[i] == "/*"){
            while (i < str.size() && str[i] != "*/") {
                i++;
            }
            if (i < str.size()) {
                i++; 
                continue;
            }
        }
        if(str[i] == "\n"){
            continue;
        } else {
            cout << str[i];
        }
    }
    
    




    
    return 0;
}