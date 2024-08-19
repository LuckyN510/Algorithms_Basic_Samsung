#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int sum; cin >> sum;
        int d4 = -1, d7 = -1;
        for(int i = sum / 7; i >= 0; i--)
        {
            if((sum - i * 7) % 4 == 0)
            {
                d4 = (sum - i * 7) / 4;
                d7 = i;
                break;
            }
        }   
        if(d4 != -1)
        {
            for(int i = 0; i < d4 ; i++)
            {
                cout << "4";
            }
            for(int i = 0; i < d7; i++)
            {
                cout << "7";
            }
        }
        else cout << "-1";
        cout << endl;
    }
}