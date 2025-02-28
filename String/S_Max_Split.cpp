//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string str , res = "";
    cin >> str;

    int len = str.length();
    vector<string> s ;

    int l = 0 , r = 0;
    for (int i = 0; i < len; i++)
    {
        res += str[i];

        if(str[i] == 'L'){
            l++;
        } else if(str[i] == 'R'){
            r++;
        }

        if(l == r){
            s.push_back(res);
            res.clear();
            l = 0;
            r = 0;
        }
    }
    
    cout << s.size() << endl;

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    



    
    return 0;
}