#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string s;
    int n;
    deque<int> dq;
    while (q--)
    {
        cin >> s;
        if (s == "PUSHFRONT")
        {
            cin >> n;
            dq.push_front(n);
        }
        else if (s == "PRINTFRONT")
        {
            if (!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPFRONT")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "PUSHBACK")
        {
            cin >> n;
            dq.push_back(n);
        }
        else if (s == "PRINTBACK")
        {
            if (!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPBACK")
        {
            if (!dq.empty())
                dq.pop_back();
        }
    }
}
