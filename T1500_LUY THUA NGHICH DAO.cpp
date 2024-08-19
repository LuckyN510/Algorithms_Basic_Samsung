    #include<bits/stdc++.h>

    using namespace std;
    using ll = long long;

    ll mod = 1e9 + 7;

    ll rev(ll n)
    {
        ll lat = 0;
        while(n)
        {
            lat = lat * 10 + n % 10;
            n /= 10;
        }
        return lat;
    }

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
            cout << powMod(n, rev(n)) << endl;
        }
    }
