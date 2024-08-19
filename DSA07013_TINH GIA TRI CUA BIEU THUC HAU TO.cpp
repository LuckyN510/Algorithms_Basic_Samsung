#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(string &s) 
{
    stack<ll> st;
    for (int i = 0; i < s.length(); i++) 
    {
        if (isdigit(s[i])) 
        {
            st.push(s[i] - '0');
        } 
        else 
        {
            ll o1 = st.top(); st.pop();
            ll o2 = st.top(); st.pop();
            if (s[i] == '+') 
            {
                st.push(o2 + o1);
            } 
            else if (s[i] == '/') 
            {
                st.push(o2 / o1);
            } 
            else if (s[i] == '-') 
            {
                st.push(o2 - o1);
            } 
            else if (s[i] == '*') 
            {
                st.push(o2 * o1);
            }
        }
    }
    cout << st.top() << endl;
}

int main() 
{
    int t; cin >> t;
    string s;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        solve(s);
    }
}
