#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        ll res = 1;
        if(k > n) 
        {
            cout << "0" << endl;
        }
        else if(k == n) 
        {
            cout << "1" << endl;
        }
        else
        {
            for(int i = n; i > n - k; i--)
            {
                res *= i;
                res %= mod;
            }
            cout << res << endl;
        }
    }
}
