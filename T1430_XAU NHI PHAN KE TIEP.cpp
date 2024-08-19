#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int i = s.length() - 1;
        bool ok = 0;
        while(i >= 0 && s[i] == '1')
        {
            s[i] = '0';
            --i;
        }   
        if(i >= 0) 
        {
            s[i] = '1';
            cout << s;
        }
        else
        {
            cout << s ;
        }
        cout << endl;
    }
}