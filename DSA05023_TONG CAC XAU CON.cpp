#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int n = s.length();
		s = "0" + s;
		ll F[n + 1] = {0};
		ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            F[i] = F[i - 1] * 10 + i * (s[i] - '0');
            sum += F[i];
        }
        cout << sum << endl;
	}	
}