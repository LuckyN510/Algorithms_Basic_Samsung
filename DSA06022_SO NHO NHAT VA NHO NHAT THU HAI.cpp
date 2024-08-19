#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> v(n);
		set<int> se;
		vector<int> v1;
		for(int i = 0; i < v.size(); i++)
		{
			cin >> v[i];
			se.insert(v[i]);
		}
		for(int x : se)
		{
			v1.push_back(x);
		}
		if(se.size() == 1) cout << "-1" << endl;
		else
		{
			cout << v1[0] << ' ' << v1[1] << endl;
		}
	}
}