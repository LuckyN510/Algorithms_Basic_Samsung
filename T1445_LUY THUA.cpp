#include<bits/stdc++.h>

using namespace std;
using ll = long long ;

ll mod = 1e9 + 7;

ll powMod(ll n, ll k)
{
    if(k == 0) return 1;
    ll x = powMod(n, k / 2);
    if(k % 2 == 0) return x * x % mod;
    else return ((x * x % mod) * (n % mod)) % mod;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << powMod(n, k) << endl;
    }
}
