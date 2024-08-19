#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(s[0] == s[s.size() - 1]) cout << "YES\n";
        else cout <<"NO\n";
    }
}