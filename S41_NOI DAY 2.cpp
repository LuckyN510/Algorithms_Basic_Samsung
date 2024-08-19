#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        vector<int> a(n); 
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        ll res = 0;
        while (pq.size() >= 2) 
        {
            ll t1 = pq.top(); 
            pq.pop();
            t1 = (t1 + pq.top()) % mod; 
            pq.pop();
            res = (res + t1) % mod;
            pq.push(t1);
        }
        
        cout << res << endl;
    }
}
