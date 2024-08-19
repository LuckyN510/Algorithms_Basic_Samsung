#include<bits/stdc++.h>

using namespace std;

int n, k, x[100], a[100];

void Try(int i)
{
    for(int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if(i == k)
        {
            for(int j = 1; j <= k; j++)
            {
                cout << a[x[j]] << ' ';
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        x[0] = 0; 
        Try(1);
    }
}
