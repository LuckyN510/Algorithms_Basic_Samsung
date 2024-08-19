#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> v;
string s;

void ktao()
{
    queue<string> q;
    q.push("1");
    while(!q.empty())
    {
        string u = q.front(); q.pop();
        if(u.length() >= 21) break;
        v.push_back(u);
        q.push(u + "0");
        q.push(u + "1");
    }
}

int chiaHet(string &s, int n)
{
    int mod = 0;
    for(int i = 0; i < s.length(); i++)
    {
        mod = mod * 10 + (s[i] - '0') % n;
        mod %= n; 
    }
    return mod == 0;
}

int solve()
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