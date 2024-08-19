#include<bits/stdc++.h>

using namespace std;

char c;
int n, a[100], k, ok;

void ktao()
{
    for(int i = 1; i <= k; i++)
    {
        a[i] = 1;
    }
}

void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1];
        }
    }
}

int main()
{
    cin >> c >> k;
    n = c - 'A' + 1;
    ktao();
    ok = 1;
    while(ok)
    {
        for(int i = 1; i <= k; i++)
        {
            cout << (char)(a[i] + 'A' - 1);
        }
        cout << endl;
        sinh();
    }

}