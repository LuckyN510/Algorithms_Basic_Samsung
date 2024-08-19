#include<bits/stdc++.h>

using namespace std;

string solve(int sum, int n)
{
    string res = string(n, '0');
    for(int i = n - 1; i >= 0; i--)
    {
        if(sum > 9)
        {
            res[i] = '9';
            sum -= 9;
        }
        else
        {
            if(i != 0)
            {
                res[0] = '1';
                res[i] += sum - 1;
                return res;
            }
            else
            {
                res[i] += sum;
                return res;
            }
        }
    }
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        int sum, n; cin >> sum >> n;
        if(sum > n * 9 || sum == 0 && n > 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << solve(sum, n) << endl;
        }
    }
}
