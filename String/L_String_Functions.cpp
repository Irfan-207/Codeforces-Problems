//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    int n , q;
    cin >> n >> q;
    string str;

    cin >> str;
    
    
    while (q--)
    {
        string quires;
        cin >> quires;

        if(quires == "pop_back"){
            if(!str.empty()){
                str.pop_back();
            }
        } else if(quires == "front"){
            if(!str.empty()){
                cout << str.front() << endl;
            }
        } else if(quires == "back"){
            if(!str.empty()){
                int len = str.length();
                cout << str[len-1] << endl;
            }
        } else if(quires == "sort"){
            int l , r;
            cin >> l >> r;
            l--;
            r--;
            if(l >= 0 && r <str.length() && l<=r){
                sort(str.begin() + l , str.begin() + r + 1);
            }
        } else if(quires == "reverse"){
            int l , r;
            cin >> l >> r;
            l--;
            r--;
            if(l>=0 && r<str.length() && l<=r){
                reverse(str.begin() + l , str.begin() + r + 1);
            }
        } else if(quires == "print"){
            int pos;
            cin >> pos;
            cout << str[pos-1] << endl;
        } else if(quires == "substr"){
            int l , r;
            cin >> l >> r;
            if(l>0 && r<str.length() && l<=r){
                for (int i = l-1; i < r; i++)
                {
                    cout << str[i];
                }
            }
            cout << endl;
        } else if(quires == "push_back"){
            char x;
            cin >> x;
            str.push_back(x);
        }
    }
    


    
    return 0;
}