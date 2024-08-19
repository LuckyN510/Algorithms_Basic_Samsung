#include <bits/stdc++.h>

using namespace std;

int n, k, x[100], a[100];
vector<vector<int>> v;

void Try(int i, int pos, int sum) 
{
    for (int j = pos; j <= n; j++)
    {
        if (sum + a[j] <= k) 
        {
            x[i] = a[j];
            if (sum + a[j] == k) 
            {
                vector<int> tmp(x + 1, x + i + 1);
                v.push_back(tmp);
            }
            else  Try(i + 1, j, sum + a[j]);  
        }
    }
}

int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        v.clear();
        cin >> n >> k;
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1, 1, 0);
        if (v.size() == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        for (vector<int> it : v) 
        {
            cout << "[";
            for (int i = 0; i < it.size(); i++) 
            {
                cout << it[i];
                if (i < it.size() - 1) 
                {
                    cout << ' ';
                }
            }
            cout << "]";
        }
        cout << endl;
    }
    return 0;
}
