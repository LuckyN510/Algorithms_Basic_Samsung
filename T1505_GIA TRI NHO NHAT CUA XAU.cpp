#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string s; cin >> s;
        int cnt[256] = {0};
        priority_queue<int> pq;
        for(int i = 0; i < s.length(); i++)
        {
            cnt[s[i]]++;
        }
        for(int i = 0; i < 256; i++)
        {
            if(cnt[i]) 
                pq.push(cnt[i]);
        }
        while(k-- && !pq.empty())
        {
            int t = pq.top(); pq.pop();
            if(t - 1 >= 1)
                pq.push(t - 1);
        }
        ll res = 0;
        while(!pq.empty())
        {
            int t = pq.top(); pq.pop();
            res += 1ll * t * t;
        }
        cout << res << endl;
    }
}