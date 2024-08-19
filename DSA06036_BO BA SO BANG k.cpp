#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
   int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        ll ans = 0;
        bool ok = 0;
        for(int i = 0; i < n - 2; i++)
        {
            for(int j = i + 1; j < n - 1; j++)
            {
                if(binary_search(a + j + 1, a + n , k - a[i] - a[j]))
                {
                    ok = 1;
                    break;
                }
            }
            if(ok)
            {
                break;
            }
        }
        if(ok == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}