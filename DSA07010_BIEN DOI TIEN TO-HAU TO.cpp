#include<bits/stdc++.h>
using namespace std;

void solve(string &s)
{
    stack<string> st;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string o1 = st.top(); st.pop();
            string o2 = st.top(); st.pop();
            string tmp = o1 + o2 + s[i  ];
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