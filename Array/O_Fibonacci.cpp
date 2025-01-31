//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;
int main(){
    optimize();
    int N;
    cin >> N;

    long long a = 0, b = 1, c;

    if (N == 1) {
        cout << a << endl;
        return 0;
    } else if (N == 2) {
        cout << b << endl;
        return 0;
    }

    for (int i = 3; i <= N; i++) {
        c = a + b; 
        a = b;     
        b = c;    
    }

    cout << b << endl;
    
    



    
    return 0;
}