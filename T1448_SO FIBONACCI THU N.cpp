#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll mod = 1e9 + 7;

struct matrix
{
    ll f[2][2];
};

matrix operator * (matrix a, matrix b)
{
    matrix c;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            c.f[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                c.f[i][j] = (c.f[i][j] + a.f[i][k] * b.f[k][j]) % mod;
            }
        }
    }
    return c;
}

matrix powMod(matrix a, ll n) 
{
    if(n == 1) return a;
    matrix x = powMod(a, n / 2);
    if(n % 2 == 0) return x * x;
    return a * x * x;
}

int main() 
{
	int t; cin >> t;
	while(t--)
	{
     	ll n;
     	cin >> n;
    	matrix a;
    	a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
    	a.f[1][1] = 0;
    	matrix res = powMod(a, n);
    	cout << res.f[0][1] << endl;
	}
}
