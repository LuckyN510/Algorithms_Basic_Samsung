#include<bits/stdc++.h>

using namespace std;

string s[10000];
int n;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        int len = pow(2, n);
        // khoi tao
        s[1] = '0';
        s[2] = '1';
        int pos = 2; // vị trí lấy đối xứng
        for(int i = 2; i <= n; i++)
        {
            int k = pow(2, i);
            for(int j = 1; j <= pos; j++)
            {
                s[k - j + 1] = '1' + s[j];
                s[j] = '0' + s[j]; 
            }
            pos = k;
        }
        for(int i = 1; i <= len; i++)
        {
            cout << s[i] << ' ';
        }
        cout << endl;
    }

}
