#include<bits/stdc++.h>

using namespace std;

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool found = 0;
        for(int i = 2; i <= n; i++)
        {
            if(nt(i) && nt(n - i))
            {
                cout << i << ' ' << n - i << endl;
                found = 1;
                break;
            }
        }
        if(found == 0) cout << "-1" << endl;
    }
}