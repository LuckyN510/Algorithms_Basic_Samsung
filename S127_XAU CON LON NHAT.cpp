#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    vector<char> v;
    char c = 'a';
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] >= c)
        {
            c = s[i];
            v.push_back(s[i]);
        }
    }
    for(int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
}