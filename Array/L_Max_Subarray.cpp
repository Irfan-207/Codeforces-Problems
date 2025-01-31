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
        int n;
        cin >> n;
        vector<int> num(n);

        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        
        vector<int> max_value;

        for (auto i = 0; i < n; i++) {
            int current_max = num[i];

            for (auto j = i; j < n; j++) {
                current_max = max(current_max , num[j]);
                max_value.push_back(current_max);
            }
            
        }
        for(const int &U : max_value){
            cout << U << " ";
        }
        cout << endl;
    }
    



    
    return 0;
}