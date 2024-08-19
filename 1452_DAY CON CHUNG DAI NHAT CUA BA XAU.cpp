#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m, p; cin >> n >> m >> p;
        string x, y, z; cin >> x >> y >> z;
        int F[n + 1][m + 1][p + 1];
        memset(F, 0, sizeof(F));
        x = "0" + x;
        y = "0" + y;
        z = "0" + z;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                for(int k = 1; k <= p; k++)
                {
                    if(x[i] == y[j] && y[j] == z[k])
                    {
                        F[i][j][k] = F[i - 1][j - 1][k - 1] + 1;
                    }
                    else
                    {
                        F[i][j][k] = max({
                                        F[i - 1][j][k],
                                        F[i][j - 1][k],
                                        F[i][j][k - 1],
                                        });
                    }
                }
            }
        }
        cout << F[n][m][p] << endl;
    }
}