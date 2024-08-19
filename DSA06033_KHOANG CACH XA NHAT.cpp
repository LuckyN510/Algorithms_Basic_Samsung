#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        pair<int, int> a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n); // sắp xếp a[i].first theo thứ tự tăng dần, a[i].second là vị trí đc gắn theo a[i].first ban đầu
        int res = -1, min_se = a[0].second, k = a[0].first;
        for(int i = 1; i < n; i++)
        {
            if(a[i].first > k)
            {
                res = max(res, a[i].second - min_se);
            }
            if(min_se > a[i].second)
            {
                min_se = a[i].second;
                k = a[i].first;
            }
        }
        cout << res << endl;

    }
}