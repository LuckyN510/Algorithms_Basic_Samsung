#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
ll k;

int findPos(int n, ll k)
{
	ll x = pow(2, n - 1);
	if(x == k) return n;
	if(x > k)
	{
		return findPos(n - 1, k);
	}
	else
	{
		return findPos(n - 1, k - x);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << findPos(n, k) << endl;
	}
}