#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
	int n;
	ll F[51];
	F[1] = 1;
	F[2] = 2;
	F[3] = 4;
	for(int i = 4; i <= 50; i++)
	{
		F[i] = F[i - 1] + F[i - 2] + F[i - 3];
	}
	int t; cin >> t;
	while(t--)
	{
	
		cin >> n;
		cout << F[n] << endl;
	}
}