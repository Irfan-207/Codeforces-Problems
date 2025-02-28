//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    string U ;
    getline(cin , U);

    int index ;
    for (int i = 0; i < U.length(); i++)
    {
        if(U[i] == '?'){
            index = i;
            break;
        }
    }
    U.erase(0 , index+1);

    for (int i = 0; i < U.length(); i++)
    {
        if(U[i] == '='){
            cout << ": ";
        }else if(U[i] == '&'){
            cout << endl;
        }else {
            cout << U[i];
        }
    }


    
    return 0;
}