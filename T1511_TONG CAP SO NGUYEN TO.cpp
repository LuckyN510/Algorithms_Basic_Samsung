#include <bits/stdc++.h>

using namespace std;

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}
int main() 
{
    int t; cin >> t;
    while(t--)
    {
        int sum ; cin >> sum;
        bool find = 0;
        for(int i = 2; i <= sum; i++)
        {
            if(nt(i) && nt(sum - i))
            {
                cout << i << ' ' << sum - i;
                find = 1;
                break;
            }
        }
        if(!find) cout << "-1";
        cout << endl;
    }
}
