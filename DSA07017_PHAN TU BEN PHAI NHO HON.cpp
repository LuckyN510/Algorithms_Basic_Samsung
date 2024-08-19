#include<bits/stdc++.h>

using namespace std;

void Next_Greater(int a[], int n, int d[])
{
    stack<int> st1;
    for(int i = 0; i < n; i++)
    {
        while(!st1.empty() && a[i] > a[st1.top()])
        {
            d[st1.top()] = i;
            st1.pop();
        }
        st1.push(i);
    }
    while(!st1.empty())
    {
        d[st1.top()] = -1;
        st1.pop();
    }
}

void Right_Smaller(int a[], int n, int f[])
{
    stack<int> st2;
    for(int i = 0; i < n; i++)
    {
        while(!st2.empty() && a[i] < a[st2.top()])
        {
            f[st2.top()] = i;
            st2.pop();
        }
        st2.push(i);
    }
    while(!st2.empty())
    {
        f[st2.top()] = -1;
        st2.pop();
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], d[n], f[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        Next_Greater(a, n, d);
        Right_Smaller(a, n, f);
        for(int i = 0; i < n; i++)
        {
            if(d[i] != -1 && f[d[i]] != -1)
            {
                cout << a[f[d[i]]] << ' ';
            }
            else
            {
                cout << "-1" << ' ';
            }
        }
        cout << endl;
    }
}
