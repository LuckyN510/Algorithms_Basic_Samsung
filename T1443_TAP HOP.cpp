#include<bits/stdc++.h>

using namespace std;

int n, k, s, x[100], cnt = 0;

void Try(int i, int pos, int sum)
{
    for(int j = pos; j <= n; j++)
    {
        x[i] = j;
        if(i == k)
        {
            if(sum + j == s)
            {
                ++cnt;
            }
        }
        else Try(i + 1, j + 1, sum + j);
    }
}
int main()
{
   while(1)
   {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0 ) break;
        cnt = 0;
        Try(1, 1, 0);
        cout << cnt << endl;
        
   }
}