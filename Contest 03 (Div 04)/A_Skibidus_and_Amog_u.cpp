//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int n;
    cin >> n;

    while (n--)
    {
        string Str;
        cin >> Str;

        int len = Str.length();

        Str[len - 2] = 'i';
        Str.erase(len - 1);
        cout << Str << endl;
    }
    



    
    return 0;
}