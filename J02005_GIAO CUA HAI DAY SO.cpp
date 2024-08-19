#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> se1, se2;
    vector<int> giao;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        se1.insert(x);
    }
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        se2.insert(x);
    }
    for(int x : se1)
    {
        if(se2.count(x))
        {
            giao.push_back(x);
        }
    }
    for(int x : giao)
    {
        cout << x << ' ';
    }
    
}