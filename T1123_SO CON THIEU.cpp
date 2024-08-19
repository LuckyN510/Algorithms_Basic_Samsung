#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n - 1);
        vector<int> b(n + 1, 0); 
        for(int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            if(a[i] <= n)
            {
                b[a[i]] = 1;
            }
        }
        for(int i = 1; i <= n; i++)
        {
            if(!b[i])
            {
                cout << i << ' ';
            }
        }
        
        cout << endl;
    }   
}
