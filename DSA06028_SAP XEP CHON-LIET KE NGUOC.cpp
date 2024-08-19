#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<vector<int>> M;
    for(int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[min_pos] > a[j])
            {
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
        vector<int> v;
        for(int j = 0; j < n; j++)
        {
            v.push_back(a[j]);
        }
        M.push_back(v);
    }
    for(int i = M.size() - 1; i >= 0; i--)
    {
        cout <<"Buoc " << i + 1 <<": ";
        for(int j = 0; j < n; j++)
        {
            cout << M[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}