#include<bits/stdc++.h>

using namespace std;

int d[1000007];
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		int d[100007] = {0};
		for(int &x : a) 
		{
			cin >> x;
			d[x]++;
		}
		for(int x : a)
		{
			if(d[x] % 2 != 0)
			{
				cout << x;
				break;
			}
		}
		cout << endl;
		
	}
}