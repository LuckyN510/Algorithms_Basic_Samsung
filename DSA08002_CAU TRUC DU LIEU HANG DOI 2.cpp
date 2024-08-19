#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int q; cin >> q;
    deque<int> st;
    string s; 
    int n;
    while (q--) 
    {
        cin >> s;
        if (s == "PUSH") 
        {
            cin >> n;
            st.push_back(n);
        } 
        else if (s == "PRINTFRONT") 
        {
            if (!st.empty()) 
            {
                cout << st.front() << endl;
            } 
            else 
            {
                cout << "NONE" << endl;
            }
        } 
        else if (s == "POP") 
        {
            if (!st.empty()) 
            {
                st.pop_front();
            }
        }
    }
}
