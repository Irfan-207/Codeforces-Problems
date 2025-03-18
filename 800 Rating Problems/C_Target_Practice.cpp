//* Author : Irfan Sadik Niloy *//
#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define mod 1000000007

// Debugging macro
#define debug(x) cerr << #x << " = " << (x) << "\n";
using namespace std;



// Global variable
vector<vector<int>> score_board = 
{
    {1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1},
    {1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1},
    {1 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 2 , 1},
    {1 , 2 , 3 , 4 , 4 , 4 , 4 , 3 , 2 , 1},
    {1 , 2 , 3 , 4 , 5 , 5 , 4 , 3 , 2 , 1},
    {1 , 2 , 3 , 4 , 5 , 5 , 4 , 3 , 2 , 1},
    {1 , 2 , 3 , 4 , 4 , 4 , 4 , 3 , 2 , 1},
    {1 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 2 , 1},
    {1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1},
    {1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1}
};
int main(){
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> matrix(10 , vector<char>(10));

        int total_score = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> matrix[i][j];
                if(matrix[i][j] == 'X'){
                    total_score += score_board[i][j];
                }
            }
        }
        cout << total_score << endl;
    }
    


    
    return 0;
}