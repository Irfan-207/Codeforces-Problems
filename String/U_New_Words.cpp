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
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] == 'E' || S[i] == 'e'){
            v1++;
        } 
        else if(S[i] == 'g' || S[i] == 'G'){
            v2++;
        } 
        else if(S[i] == 'Y' || S[i] == 'y'){
            v3++;
        } 
        else if(S[i] == 'p' || S[i] == 'P'){
            v4++;
        } 
        else if(S[i] == 't' || S[i] == 'T'){
            v5++;
        } 
    }
    
    vector<int> num;
    num.push_back(v1);
    num.push_back(v2);
    num.push_back(v3);
    num.push_back(v4);
    num.push_back(v5);

    sort(num.begin() , num.end());
    cout << num[0];
    
    return 0;
}