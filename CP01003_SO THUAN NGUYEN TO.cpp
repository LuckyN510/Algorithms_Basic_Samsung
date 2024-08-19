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
int check(int n)
{
	int r = 0, sum = 0;
	while(n)
	{
		r = n % 10;
		if(!nt(r))
		{
			return 0;
		}
		sum += n % 10;
		n /= 10;
	}
	return nt(sum);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		int min1 = a < b ? a : b;
		int max1 = a > b ? a : b;
		int dem = 0;
		for(int i = min1; i <= max1; i++)
		{
			if(check(i) && nt(i))
			{
				++dem;
			}
		}
		cout << dem << endl;
	}
}
