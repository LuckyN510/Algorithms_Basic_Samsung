#include <bits/stdc++.h>
using namespace std;

void Lower(string &s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main() 
{
    string s1, s2;
    getline(cin, s1);
    scanf("\n");
    getline(cin, s2);
    Lower(s1); Lower(s2);
    set<string> v1, v2, hop;
    stringstream ss1(s1), ss2(s2);
    string word;
    while (ss1 >> word) 
    {
        v1.insert(word);
    }
    while (ss2 >> word) 
    {
        v2.insert(word);
    }
    vector<string> giao;
    for(auto x : v1)
    {
        if(v2.count(x))
        {
            giao.push_back(x);
        }
        hop.insert(x);
    }
    for(auto x : v2)
    {
        hop.insert(x);
    }
    for(auto it : hop) cout << it <<' ';
    cout << endl;
    for(auto it : giao) cout << it << ' ';
    cout << endl;
}