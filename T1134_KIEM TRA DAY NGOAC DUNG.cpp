#include<bits/stdc++.h>

using namespace std;

bool valid(char a, char b)
{
    return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']');
}
int check(string &s)
{
    stack<char> st;
    int n = s.length();
    for(char x : s)
    {
        if(x == '['|| x == '{' || x == '(') st.push(x);
        else
        {
            if(st.empty()) return 0;
            char y = st.top(); st.pop();
            if(!valid(y, x)) return 0;
        }
    }
    return st.empty();
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}