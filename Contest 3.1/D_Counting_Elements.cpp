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
    vector<ll> num(n);
    unordered_set<int> element_count;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        element_count.insert(num[i]);
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(element_count.find(num[i] + 1) != element_count.end()){
            count++;
        }
    }
    cout << count << endl;


    
    return 0;
}