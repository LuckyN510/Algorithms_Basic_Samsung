#include <bits/stdc++.h>

using namespace std;
using ll = long long;
    int main() 
    {
        int n; 
        cin >> n;
        int a[n];
        vector<int> F, G;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            F.push_back(abs(a[i]));
            G.push_back(a[i]);
        }
        sort(F.begin(), F.end());
        sort(G.begin(), G.end());
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
           sum += 1ll * (F[i] + G[i]);
        }
        cout << sum << endl;
    }
