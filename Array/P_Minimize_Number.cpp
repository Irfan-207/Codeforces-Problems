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

    vector<int> num(n);
    bool possible = true;
    for (auto i = 0; i < n; i++) {
        cin >> num[i];
        if(num[i] % 2 != 0){
            possible = false ;
        }
    }

    int op = 0;
    
    while (true)
    {
        possible = true;
        for (auto i = 0; i < n; i++) {
            if(num[i] % 2 != 0){
                possible = false ;
                break;
            }
        }

        if(possible){
            for (auto i = 0; i < n; i++) {
                num[i] /= 2;
            }
            op++;
        } else {
            break;
        }
    }
    
    cout << op << endl;
    
    return 0;
}