#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    while (n)
    {
        int r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main()
{
    string s;
    map<string, int> mp;
    vector<string> v;
    while (cin >> s)
    {
        if (check(stoi(s)))
        {
            if (mp[s] == 0) 
            {
                v.push_back(s);
            }
            mp[s]++;
        }
    }
    for (auto x : v)
    {
        cout << x << ' ' << mp[x] << endl;
    }

    return 0;
}
