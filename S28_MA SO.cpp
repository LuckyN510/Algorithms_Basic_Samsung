#include<bits/stdc++.h>
using namespace std;

bool used[1001];
int n, x[100];
vector<string> v1, v2;

void solve_Hoanvi()
{
    string s = "";
    for(int i = 1; i <= n; i++)
    {
        s = s + char(x[i] + 'A' - 1);
    }
    v1.push_back(s);
}
void Try_Hoanvi(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(used[j] == false)
        {
            x[i] = j;
            used[j] = true;
            if(i == n) solve_Hoanvi();
            else Try_Hoanvi(i + 1);
            used[j] = false;
        }
    }
}
void solve_ChinhHop()
{
    string s = "";
    for(int i = 1; i <= n; i++)
    {
        s = s + to_string(x[i]);
    }
    v2.push_back(s);
}
void Try_ChinhHop(int i)
{
    for(int j = 1; j <= n; j++)
    {
        x[i] = j;
        if(i == n) solve_ChinhHop();
        else Try_ChinhHop(i + 1);   
    }
}

int main()
{
    cin >> n;
    Try_ChinhHop(1);
    Try_Hoanvi(1);
    for(string x : v1)
    {
        for(string y : v2)
        {
            cout << x + y << endl;
        }
    }
}
