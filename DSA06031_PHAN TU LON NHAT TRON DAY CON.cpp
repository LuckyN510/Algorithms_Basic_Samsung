#include<bits/stdc++.h>
using namespace std;

int n, k, x[100], a[100];
bool used[100];
vector<vector<int>> v;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!used[j])
        {
            x[i] = a[j];
            used[j] = 1;
            if(i == k)
            {
                vector<int> tmp(x + 1, x + i + 1);
                v.push_back(tmp);
            }
            else Try(i + 1);
            used[j] = 0;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        v.clear();
        cin >> n >> k;
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
        }
        Try(1);
        for (vector<int> it : v) 
        {
            cout << "[";
            for (int i = 0; i < it.size(); i++) 
            {
                cout << it[i];
                if (i < it.size() - 1) 
                {
                    cout << ' ';
                }
            }
            cout << "]";
        }
        cout << endl;
    
    }
}