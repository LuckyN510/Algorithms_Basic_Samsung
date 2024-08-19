#include<bits/stdc++.h>
using namespace std;

void solve(string &s)
{
    stack<string> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string o1 = st.top(); st.pop();
            string o2 = st.top(); st.pop();
            string tmp = '(' + o2 + s[i] + o1 + ')';
            st.push(tmp);
        }
    }
    cout << st.top();
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
        string s; cin >> s;
        solve(s);
        cout << endl;
    }
    
}