#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[1001][1001];
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int N, C; cin >> N >> C;
        int w[N + 1], c[N + 1];
        for(int i = 1; i <= N; i++) cin >> w[i];
        for(int i = 1; i <= N; i++) cin >> c[i];
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= C; j++)
            {
                if(j >= w[i])
                {
                    F[i][j] = max(F[i - 1][j - w[i]] + c[i], F[i - 1][j]);
                }
                else
                {
                    F[i][j] = F[i - 1][j];
                }
            }
        }
        cout << F[N][C] << endl;        

    }
}