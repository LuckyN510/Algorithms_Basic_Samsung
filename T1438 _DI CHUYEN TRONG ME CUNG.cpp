#include <bits/stdc++.h>

using namespace std;

int n, res, a[101][101];
string s = "";

void Try(int i, int j) {
    if (i == n && j == n) {
        res = 1;
        cout << s << ' ';
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1) {
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    if (j - 1 > 0 && a[i][j - 1] == 1) {
        s += "L";
        a[i][j - 1] = 0;
        Try(i, j - 1);
        a[i][j - 1] = 1;
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1) {
        s += "R";
        a[i][j + 1] = 0;
        Try(i, j + 1);
        a[i][j + 1] = 1;
        s.pop_back();
    }
    if (i - 1 > 0 && a[i - 1][j] == 1) {
        s += "U";
        a[i - 1][j] = 0;
        Try(i - 1, j);
        a[i - 1][j] = 1;
        s.pop_back();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> a[i][j];
            }
        }
        s = "";
        res = 0;
        if (a[1][1] == 1) {
            a[1][1] = 0;
            Try(1, 1);
        }
        if (res == 0) cout << "-1";
        cout << endl;
    }
    return 0;
}