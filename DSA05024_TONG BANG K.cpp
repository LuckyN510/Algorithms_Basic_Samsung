#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int F[k + 1] = {};
        F[0] = 1;
        for(int i = 1; i <= k; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i >= a[j])
                    F[i] = (F[i- a[j]] + F[i]) % mod;
            }
        }
        cout << F[k] << endl;
    }
}
