#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void Smaller_Left(int a[], int n, int L[])
{
    stack<int> st;
    for(int i = n - 1; i >= 0; i--)   
    {
        while(st.size() && a[i] < a[st.top()])
        {
            L[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(st.size())
    {
        L[st.top()] = -1;
        st.pop();
    }
}

void Smaller_Right(int a[], int n, int R[])
{
    stack<int> st;
    for(int i = 0; i < n; i++)  
    {
        while(st.size() && a[i] < a[st.top()])
        {
            R[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(st.size())
    {
        R[st.top()] = n;
        st.pop();
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], L[n], R[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Smaller_Left(a, n, L);
        Smaller_Right(a, n, R);
        ll res = 0;
        for(int i = 0; i < n; i++)
        {
            int rong = R[i] - L[i] - 1;
            ll S = 1ll * rong * a[i];
            res = max(res, S);
        }
        cout << res << endl;
    }
}
