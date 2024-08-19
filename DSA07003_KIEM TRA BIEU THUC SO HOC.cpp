#include<bits/stdc++.h>

using namespace std;

int check(string s)
{
    stack<int> st;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
        {
            st.push(i);
        }
        else if(s[i] == ')')
        {
            if(st.empty())
                return 0; 

            int j = st.top();
            st.pop();
            if(i - j == 2) 
                return 1; 
            else if(j + 1 < i && s[j + 1] == '(' && s[i - 1] == ')') 
                return 1; 
        }
    }
    return 0;
}

int main()
{   
    int t; 
    cin >> t;
    cin.ignore(); 
    while(t--)
    {
        string s; 
        getline(cin, s); 
        if(check(s)) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}