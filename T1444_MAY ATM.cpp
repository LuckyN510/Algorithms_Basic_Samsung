#include<bits/stdc++.h>

using namespace std;

int n, a[100], x[100], s, res;

void Try(int i, int pos, int sum)
{
    for(int j = pos; j <= n; j++)
    {
        x[i] = a[j];
        if(sum + a[j] == s)
        {
            res = min(res, i);
        }
        else if(sum + a[j] < s)
        {
            Try(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
    	cin >> n >> s;
    	for(int i = 1; i <= n; i++)
    	{
    	    cin >> a[i];
    	}
    	sort(a + 1, a + n + 1);
    	res = INT_MAX;
    	Try(1, 1, 0);
    	if(res == INT_MAX) cout << "-1\n"; 
    	else cout << res << "\n";
    }
}
