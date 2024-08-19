#include<bits/stdc++.h>

using namespace std;

int tongcs(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << tongcs(n) << endl;
	}
}