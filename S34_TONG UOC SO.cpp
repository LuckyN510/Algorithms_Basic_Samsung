#include<bits/stdc++.h>

using namespace std;

int check(int n)
{
    int sum = 0, tmp = n;
    for(int i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            sum += i;
            if(i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return (sum - tmp) > tmp ;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++)
    {
       if(check(i)) ++cnt;  
    }
    cout << cnt << endl;
    
}