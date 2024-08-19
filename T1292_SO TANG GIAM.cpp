#include<bits/stdc++.h>

using namespace std;

bool tang(string &s)
{
	for(int i = 1; i < s.size(); i++)
	{
		if(s[i] < s[i - 1])
		{
			return 0;
		}
	}
	return 1;
}

bool giam(string &s)
{
	for(int i = 1; i < s.size(); i++)
	{
		if(s[i] > s[i - 1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		if(tang(s) || giam(s)) cout <<"YES\n";
		else cout <<"NO\n";
	}
}
