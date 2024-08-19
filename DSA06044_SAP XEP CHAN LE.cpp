#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> chan, le;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            chan.push_back(a[i]);
        }
        else
        {
            le.push_back(a[i]);
        }
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());
    int mark1 = 0, mark2 = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout << chan[mark1++] <<' ';
        }
        else
        {
            cout << le[mark2++] << ' ';
        }
    }
}