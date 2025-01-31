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
    
    int max_index = 0 , min_index = 0;
    int max_value = num[0] , min_value = num[0];
    for (int i = 0; i < N; i++)
    {
        if(num[i] > max_value){
            max_value = num[i];
            max_index = i;
        }
        if(num[i] < min_value){
            min_value = num[i];
            min_index = i;
        }
    }
    swap(num[max_index] , num[min_index]);
    for(int U : num){
        cout << U << " ";
    }
    cout << endl;
    return 0;
}