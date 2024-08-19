#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m;
        ll k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        vector<int> v1;
        int i = 0, j = 0;
        while(i < n && j < m)
        {
            if(a[i] <= b[j])
            {
                v1.push_back(a[i++]);
            }
            else
            {
                v1.push_back(b[j++]);
            }
        }
        while(i < n) v1.push_back(a[i++]);
        while(j < m) v1.push_back(b[j++]);
        cout << v1[k - 1] << endl;
    }
}