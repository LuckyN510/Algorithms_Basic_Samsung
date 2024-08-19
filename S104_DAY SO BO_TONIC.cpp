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
        for(int &x : a) cin >> x;
        ll L[n], R[n], max_L = 0, min_R = 0;
        for(int i = 0; i < n; i++)
        {
            L[i] = a[i];
            for(int j = 0; j < i; j++)
            {
                if(a[i] > a[j])
                {
                    L[i] = max(L[i], L[j] + a[i]);
                }
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            R[i] = a[i];
            for(int j = n - 1; j > i; j--)
            {
                if(a[i] > a[j])
                {
                    R[i] = max(R[i], R[j] + a[i]);
                }
            }
        }
        ll res = 0;
        for(int i = 0 ; i < n; i++)
        {
            res = max(L[i] + R[i] - a[i], res);
        }
        cout << res << endl;
    }
}