#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second > b.second)   return 1;
    else if(a.second < b.second)   return 0;
    if(a.first < b.first)    return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        vector<pair<int, int>> v;
        map<int, int> mp;
        for (int &x : a)
        {
            cin >> x;
            mp[x]++;
        }
        for (auto x : mp)
        {
            v.push_back({x.first, x.second});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto x : v)
        {
            for (int j = 0; j < x.second; j++)
            {
                cout << x.first << ' ';
            }
        }
        cout << endl;
    }
}