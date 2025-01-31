//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();

    int n , m;
    cin >> n >> m;

    vector<int> count(m+1 , 0);

    for (int i = 0; i < n; i++)
    {
        int A;
        cin >> A;
        count[A]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << count[i] << endl;
    }
    
    
    return 0;
}