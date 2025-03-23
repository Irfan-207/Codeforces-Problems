    //* Author : Irfan Sadik Niloy *//
    #include <bits/stdc++.h>
    #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl '\n'
    #define ll long long 
    #define srt(x) sort(x.begin() , x.end()) //sort a vector
    #define rev(x) reverse(x.begin() , x.end()) // reverse a vector
    #define rev_srt(x) sort(x.begin() , x.end() , greater<int>()) // reverse sort
    #define pb push_back
    #define mp make_pair
    #define ff first
    #define ss second
    #define mod 1000000007

    // Debugging macro
    #define debug(x) cerr << #x << " = " << (x) << "\n";
    using namespace std;

    int main(){
        optimize();
        int t;
        cin >> t;
        while (t--) {
            string str , temp;
            cin >> str;
            temp = str;
            rev(temp);
            if(temp == "abc"){
                cout << "YES\n";
            } else {
                if(str[0] == 'c'){
                    cout << "NO\n";
                } else if((str[0] == 'a' && str[1] == 'b') || (str[0] == 'b' && str[1] == 'a')){
                    cout << "YES\n";
                } else if(str[0] == 'a' && str[2] == 'b'){
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
        return 0;
    }