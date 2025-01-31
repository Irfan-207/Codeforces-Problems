//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
    optimize();
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> num(N);
        for (auto i = 0; i < N; i++) {
            cin >> num[i];
        }
        int minResult = numeric_limits<int>::max();
        for (int i = 0; i < N-1; i++)
        {
            for (int j = i+1; j < N; j++) {
                int res = num[i] + num[j] + (j - i);
                if (res < minResult) {
                minResult = res;
            }
            }

        }
        cout << minResult << endl;
    }
    



    
    return 0;
}