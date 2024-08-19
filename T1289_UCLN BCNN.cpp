#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << gcd(a, b) <<' '<< lcm(a, b) << endl; 
    }
}