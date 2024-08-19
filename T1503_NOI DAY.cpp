#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        ll res = 0;
        while(pq.size() >= 2)
        {
            ll t1 = pq.top(); pq.pop();
            ll t2 = pq.top(); pq.pop();
            res += t1 + t2;
            pq.push(t1 + t2);
        }
        cout << res << endl;
    }
}