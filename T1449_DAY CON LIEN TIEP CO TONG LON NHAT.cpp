#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        ll F[n];
        for(int i = 0; i < n; i++)
        {
            F[i] = a[i];
            for(int j = 0; j < i; j++)
            {
                if(i - j == 1)
                {
                    F[i] = max(F[j] + a[i], F[i]);
                }
            }
        }
        cout << *max_element(F, F + n) << endl;
    }
}
