#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s ;
        int F[n + 1][n + 1] = {};
        memset(F, 0, sizeof(F));
        s = "0" + s;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(s[i] == s[j] && i != j)
                {
                    F[i][j] = F[i - 1][j - 1] + 1;
                }
                else
                {
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
                }
            }
        }
        cout << F[n][n] << endl;
    }
}