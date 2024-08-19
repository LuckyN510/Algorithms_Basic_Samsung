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
        string s; cin >> s;
        if(nt(stoi(s))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}