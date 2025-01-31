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
    vector<int> num(N);
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    int MinValue = num[0];
    int MinIndex = 0;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
        if(num[i] < MinValue){
            MinValue = num[i];
            MinIndex = i;
        }
    }
    cout << MinValue << " " << MinIndex + 1 << endl;


    
    return 0;
}