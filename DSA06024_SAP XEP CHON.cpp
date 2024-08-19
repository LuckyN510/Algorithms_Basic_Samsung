#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++)
    {
        int min_value = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[min_value] > a[j])
            {
                min_value = j;
            }
        }
        swap(a[i], a[min_value]);
        cout << "Buoc "<< i + 1 << ": ";
        for(int j = 0; j < n; j++)
        {
            cout << a[j] << ' ' ;
        }
        cout << endl;
    }   

}