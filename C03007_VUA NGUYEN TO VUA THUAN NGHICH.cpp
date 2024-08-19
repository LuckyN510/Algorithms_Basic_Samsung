#include<bits/stdc++.h>

using namespace std;

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

bool tn(int n)
{
    int lat = 0, tmp = n;
    while (n)
    {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return tmp == lat;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int a, b; cin >> a >> b;
		int min1 = min(a, b);
        int max1 = max(a, b);
        int cnt = 0;
		for(int i = min1; i <= max1; i++)
		{
			if(tn(i) && nt(i))
			{
				cout << i << ' ';
				++cnt;
				if(cnt == 10) 
				{
					cout << endl; 
					cnt = 0;
				}
			}
		}
		if(cnt != 0)
		cout << endl;
	}
}