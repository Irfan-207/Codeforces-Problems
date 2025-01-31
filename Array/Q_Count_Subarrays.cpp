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
        ll n;
        cin >> n;
        vector<ll> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        
        ll count = 0;
        int length = 1;

        for (int i = 1; i < n; i++)
        {
            if(num[i-1] <= num[i]){
                length ++;
            } else {
                count += (length * (length+1) ) / 2;
                length = 1;
            }
        }

        count += (length * (length+1) ) / 2;
        cout << count << endl;
    }
    



    
    return 0;
}