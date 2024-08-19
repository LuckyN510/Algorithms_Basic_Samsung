#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t; 
	while(t--)
	{
		int n, s; cin >> n >> s;
		int a[n + 1];
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		int F[s + 1];
		memset(F, false, sizeof(F));
		F[0] = 1;
		for(int i = 1; i <= n; i++)
		{
			for(int j = s; j >= 1; j--)
			{
				if(F[j - a[i]] == 1)
				{
					F[j] = 1;
				}
			}
		}
		if(F[s]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}