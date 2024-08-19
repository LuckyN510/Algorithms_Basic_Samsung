#include <bits/stdc++.h>

using namespace std;

vector<string> v;

void ktao() 
{
    queue<string> q;
    q.push("9");
    while(!q.empty()) 
    {
        string u = q.front(); q.pop();
        if(u.length() >= 18) break;  
        v.push_back(u);
        q.push(u + "0");
        q.push(u + "9");
    }
}

bool chiaHet(string &s, int n) 
{
    int mod = 0;
    for(char c : s) 
    {
        mod = (mod * 10 + (c - '0')) % n;
    }
    return mod == 0;
}

void solve() 
{
    int n; cin >> n;
    for(string x : v) 
    {
        if(chiaHet(x, n)) 
        {
            cout << x << endl;
            break;
        }
    }
}

int main()
{
    ktao();  
    int t; cin >> t;
    while(t--) 
    {
        solve();
    }
}
