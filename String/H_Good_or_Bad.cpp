//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        bool good = false;
        for (int i = 0; i < str.length() - 2; i++)
        {
            if((str[i] == '1' && str[i+1] == '0' && str[i+2] == '1') || (str[i] == '0' && str[i+1] == '1' && str[i+2] == '0')){
                good = true;
                break;
            }
        }
        if(good){
            cout << "Good\n";
        } else {
            cout << "Bad\n";
        }
    }
    



    
    return 0;
}