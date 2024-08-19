#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int F[n + 1] = {0};
		F[1] = 1;
		for(int i = 2; i <= n; i++)
		{
			F[i] = i;
			for(int j = 1; j <= sqrt(i); j++)
			{
				F[i] = min(F[i], 1 + F[i - j * j]);
			}
		}
		cout << F[n] << endl;
	}	
}