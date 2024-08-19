#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll gt(int n)
{
    ll res = 1, sum = 1;
    for(int i = 2; i <= n; i++)
    {
        res *= i;
        sum += res;
    }
    return sum;
}

int main()
{
    int n; cin >> n;
    cout << gt(n) << endl;
}