#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<vector<int>> M;
    for(int i = 0; i < n; i++)
    {
        int x = a[i];
        int pos = i - 1;
        while(pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
        vector<int> v;
        for(int j = 0; j <= i; j++)
        {
            v.push_back(a[j]);
        }
        M.push_back(v);
    }
    for(int i = M.size() - 1; i >= 0; i--)
    {
        cout <<"Buoc " << i <<": ";
        for(int j = 0; j < M[i].size(); j++)
        {
            cout << M[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}