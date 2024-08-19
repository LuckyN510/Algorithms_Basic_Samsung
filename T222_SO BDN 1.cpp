#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;

void ktao()
{
    queue<ll> q;
    q.push(1);
    while (true)
    {
        ll u = q.front(); 
        q.pop();
        if (u >= 1e18) break;
        v.push_back(u);
        q.push(u * 10);
        q.push(u * 10 + 1);
    }  
}

int solve(ll n)
{
    int cnt = 0;
    for (ll x : v)
    {
        if (x <= n)
            ++cnt;
        else
            break; 
    }
    return cnt;
}

int main()
{
    ktao();
    int t; 
    cin >> t;
    while (t--)
    {
        ll n; 
        cin >> n;
        cout << solve(n) << endl;
    }
}
