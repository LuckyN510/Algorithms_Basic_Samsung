#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll F[1001][1001];

int main()
{
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || i == j)
            {
                F[i][j] = 1;
            }
            else
            {
                F[i][j] = F[i - 1][j - 1] + F[i - 1][j];
                F[i][j] %= mod;
            }
        }
    }
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        cout << F[n][k] << endl;
    }
}