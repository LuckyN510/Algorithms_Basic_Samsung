#include<bits/stdc++.h>

using namespace std;

int n, k, a[1005], x[1005];
int res = -1e9;

void Try(int i, int pos, int sum) 
{
    for (int j = pos; j <= n; j++) 
    {
        if(sum + a[j] <= k)
        {
            x[i] = a[j];
            sum += a[j];
            if(i == 3)
            {
                res = max(res, sum);
            }
            else 
                Try(i + 1, j + 1, sum);
        		sum -= a[j];
        }
    }
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
        }
        res = -1;  
        Try(1, 1, 0);
        cout << res << endl;
    }
}
