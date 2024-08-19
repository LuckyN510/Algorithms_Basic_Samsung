#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[], int n, int k)
{
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] == k) return m + 1;
		else if(a[m] < k)  l = m + 1;
		else  r = m - 1; 
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		int pos = binary_search(a, n, k);
		if(pos == -1) cout << "NO"<< endl;
		else cout << pos << endl;
	}
}
