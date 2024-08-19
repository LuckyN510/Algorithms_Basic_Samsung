#include<bits/stdc++.h>

using namespace std;

void solve(string &s)
{
    stack<int> st; 
    int cnt = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if(st.empty())
            {
                cnt++;
                st.push(i);
            }
            else
            {
                st.pop();
            }
        }
    }
    cnt += st.size() / 2;
    cout << cnt << endl; 
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        solve(s);
    }
}