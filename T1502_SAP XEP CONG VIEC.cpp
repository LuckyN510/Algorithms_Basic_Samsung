#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), cmp);
        int cnt = 1, last_end_time = v[0].second;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= last_end_time)
            {
                ++cnt;
                last_end_time = v[i].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}