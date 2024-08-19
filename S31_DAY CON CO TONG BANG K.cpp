#include<bits/stdc++.h>

using namespace std;

int n, k, x[100], a[100];

int min_size = 1e9;

void Try(int i, int batdau, int sum)
{
    for(int j = batdau; j <= n; j++)
    {
        if(sum + a[j] <= k)
        {
            x[i] = a[j];
            if(sum + a[j] == k)
            {
                for(int l = 1; l <= i; l++)
                {
                    if(i < min_size) 
                    {
                        min_size = i;
                    }
                }
            }   
            else Try(i + 1, j + 1,  sum + a[j]);
        }
    }
}

int main()
{
    cin >>n >>k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    Try(1, 1, 0);
    if(min_size == 1e9)
    {
        cout << "-1";
    }
    else
    {
        cout << min_size;
    }
}