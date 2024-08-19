#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) 
	{
        int n; 
		cin >> n;
        vector<int> a1(n), a2(n);
        for (int i = 0; i < n; i++) {
          	cin >> a1[i];
            a2[i] = a1[i];
        }
        sort(a1.begin(), a1.end());
        
        for (int i = 0; i < n; i++) 
		{
            if (a1[i] != a2[i]) 
			{
                cout << i + 1 << ' ';
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) 
		{
            if (a1[i] != a2[i]) 
			{
                cout << i + 1 << endl;
                break;
            }
        }
    }

}
