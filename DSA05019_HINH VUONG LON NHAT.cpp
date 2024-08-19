#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];
int F[1001][1001];

int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= m; j++) 
            {
                cin >> a[i][j];
            }
        }
        int res = 0;
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= m; j++) 
            {
                if(a[i][j] == 1)
                {
                    F[i][j] = min({F[i - 1][j], F[i][j - 1], F[i - 1][j - 1]}) + 1;  
                }
                else F[i][j] = 0;
                res = max(res, F[i][j]); 
            }
        }
        cout << res << endl;
    }
}
