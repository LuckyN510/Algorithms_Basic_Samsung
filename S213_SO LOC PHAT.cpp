#include<bits/stdc++.h>

using namespace std;
using ll = long long;
vector<string> v;
void ktao()
{
    queue<string> q;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    while(1)
    {
        string u = q.front(); q.pop();
        if(u.length() == 15) break;
        q.push(u + "6");
        q.push(u + "8");
        v.push_back(u + "6");
        v.push_back(u + "8");
    }
}
int main()
{
    ktao();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<string> tmp;
        for(string x : v)
        {
            if(x.length() == n + 1) break;
            tmp.push_back(x);
        }
        cout << tmp.size() << endl;
        reverse(tmp.begin(), tmp.end());
        for(string it : tmp)
        {
            cout << it << ' ';
        }
        cout << endl;
    }
}