#include<bits/stdc++.h>
using namespace std;

int n, res, a[100];
void ktao()
{
    res = 1;
    for(int i = 1; i <= n; i++)
    {
        a[i] = i;
        res *= i;
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n; 
        ktao();
        while(res--)
        {
            prev_permutation(a + 1, a + n + 1);
            for(int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout <<' ';
        }
        cout << endl;
    }
}