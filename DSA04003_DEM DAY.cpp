    #include<bits/stdc++.h>

    using namespace std;
    using ll = long long;

    ll mod = 123456789;

    ll powMod(ll n, ll k)
    {
        if(k == 0) return 1;
        ll x = powMod(n, k / 2);
        if(k % 2 == 0) return x * x % mod;
        else return (((x * x) % mod) * n) % mod;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            ll n;
            cin >> n;
            cout << powMod(2, n - 1) << endl;
        }
    }
