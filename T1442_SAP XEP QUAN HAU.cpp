#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n, cot[100], d1[100], d2[100], a[100][100], x[100], res;
int sum = 0;

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0)
		{
			x[i] = j;
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
			sum += a[i][j];
			if(i == n)
			{
				res = max(res, sum);
			}
			Try(i + 1);
			sum -= a[i][j];
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		n = 8;
		for(int i = 1; i <= 8; i++)
		{
			for(int j = 1; j <= 8; j++)
			{
				cin >> a[i][j];
			}
		}
		res = 0;
		Try(1);
		cout << res << endl;
	}
}