#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll solve(ll n, char p, char q)
{
    string s = to_string(n);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == p) s[i] = q;
    }
    return stoll(s);
}
int main()
{
    ll a, b; cin >> a >> b;
    cout << solve(a,'6','5') + solve(b, '6','5') << ' '; 
    cout << solve(a,'5','6') + solve(b, '5','6') << endl;
}