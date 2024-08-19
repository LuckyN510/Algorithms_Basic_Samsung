#include<bits/stdc++.h>

using namespace std;

int n, a[1005], x[1005];
vector<vector<int>> v;

bool nt(int n) 
{
    for(int i = 2; i <= sqrt(n); i++) 
    {
        if(n % i == 0) 
        {
            return 0;
        }
    }
    return n > 1;
}
void Try(int i, int pos, int sum) 
{
    for (int j = pos; j <= n; j++) 
	{
        x[i] = a[j];
        if (nt(sum + a[j])) 
		{
            vector<int> tmp(x + 1, x + i + 1);
            v.push_back(tmp);
        }
        Try(i + 1, j + 1, sum + a[j]);
    }
}

int main() {
    int t; cin >> t;
    while (t--) 
	{
        v.clear();
        cin >> n;
        for (int i = 1; i <= n; i++) 
		{
            cin >> a[i];
        }
        sort(a + 1, a + n + 1, greater<int>());
        Try(1, 1, 0);
        sort(v.begin(), v.end());
        for (vector<int> tmp : v) 
		{
            for (int x : tmp) 
			{
                cout << x << ' ';
            }
            cout << endl;
        }
    }
}