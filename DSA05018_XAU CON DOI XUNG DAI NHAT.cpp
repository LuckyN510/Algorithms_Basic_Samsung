#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; cin >> s;
        int n = s.length();
        s = "0" + s; 
        bool DP[n + 1][n + 1];
        memset(DP, false, sizeof(DP));
        for(int i = 1; i <= n; i++) DP[i][i] = true; 
        int res = 1;
        for(int len = 2; len <= n; len++)
        {
            for(int i = 1; i <= n - len + 1; i++)
            {
                int j = i + len - 1;
                if(len == 2 && s[i] == s[j]) DP[i][j] = true;
                else
                {
                    DP[i][j] = DP[i + 1][j - 1] && s[i] == s[j];
                }
                if(DP[i][j] == true) res = max(res, len);
            }
        }
        cout << res << endl;
    }
}
