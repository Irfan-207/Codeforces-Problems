//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
using namespace std;

int main()
{
    optimize();
    int n;
    cin >> n;
    string Str;
    cin >> Str;

    vector<char> S;
    for (int i = 0; i < n; i++) {
        S.push_back(Str[i]);
    }
    
    int score = 0;
    
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i] == 'V'){
            score += 5;
        } else if(S[i] == 'W'){
            score += 2;
        } else if(S[i] == 'X'){
            if(i+1 < S.size()){
                S.erase(S.begin() + (i+1));
            }
        } else if(S[i] == 'Y'){
            if(i+1 < S.size()){
                char t = S[i+1];
                S.erase(S.begin() + (i+1));
                S.push_back(t);
            }
        } else if(S[i] == 'Z'){
            if(i+1 < S.size() && S[i+1] == 'V'){
                score /= 5;
                S.erase(S.begin() + (i+1));
            }
            else if(i+1 < S.size() && S[i+1] == 'W'){
                score /= 2;
                S.erase(S.begin() + (i+1));
            }
        }
    }
    cout << score << endl;
    return 0;
}