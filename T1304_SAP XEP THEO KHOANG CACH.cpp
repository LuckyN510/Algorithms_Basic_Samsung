#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        vector<pair<int, int>> v;
        for(int x : a)
        {
            v.push_back({abs(x - k), x});
        }
        stable_sort(v.begin(), v.end(), cmp);
        for(auto it : v)
        {
            cout << it.second << ' ';
        }
        cout << endl;
    }
}