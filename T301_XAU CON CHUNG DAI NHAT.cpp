#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        string s1, s2; 
        cin >> s1 >> s2;
        int n = s1.length();
        int m = s2.length();
        int F[n + 1][m + 1] = {};
        s1 = "0" + s1;
        s2 = "0" + s2;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(s1[i] == s2[j])
                {
                    F[i][j] = F[i - 1][j - 1] + 1;
                }
                else
                {
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
                }
            }
        }
        cout << F[n][m] << endl;
    }
}
