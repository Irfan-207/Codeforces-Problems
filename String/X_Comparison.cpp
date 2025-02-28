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

    int len = s.length();

    vector<string> sub;
    for (int i = 1; i < len; i++)
    {
        string str1 = s.substr(0 , i);
        string str2 = s.substr(i);
        
        sort(str1.begin() , str1.end());
        sort(str2.begin() , str2.end());

        string res = str1 + str2;
        sub.push_back(res);
    }
    
    sort(sub.begin() , sub.end());
    cout << sub[0] << endl;

    
    return 0;
}