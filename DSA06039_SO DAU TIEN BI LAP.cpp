#include<bits/stdc++.h>

using namespace std;

int cnt[1000007] = {0};
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a)
        {
            cin >> x;
        }
        int find = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    cout << a[i] << endl;
                    find = 1;
                    break;
                }
            }
            if(find) break;
        }
        if(!find) cout << "NO" << endl;
    }
}