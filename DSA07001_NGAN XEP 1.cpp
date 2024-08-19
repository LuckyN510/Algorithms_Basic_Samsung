#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n; 
    stack<int> st;
    while(cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "pop")
            st.pop();
        else if (s == "show")
        {
            if (st.size())
            {
                stack<int> q;
                while (st.size())
                {
                    q.push(st.top());
                    st.pop();
                }
                while (q.size())
                {
                    cout << q.top() << " ";
                    st.push(q.top());
                    q.pop();
                }
                cout << endl;
            }
            else
                cout << "empty" << endl;
        }
    }
}
