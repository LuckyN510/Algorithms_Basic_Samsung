#include<bits/stdc++.h>

using namespace std;

int n, x[100];
bool used[100];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j] && abs(x[i - 1] - j) != 1)
        {
            x[i] = j;
            used[j] = 1;
            if (i == n)
            {
                for (int l = 1; l <= n; l++)
                {
                    cout << x[l];
                }
                cout << endl;
            }
            else Try(i + 1);
            used[j] = 0;
        }
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        x[0] = -1;
        Try(1);
    }
}