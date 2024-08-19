#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumOfPrimeFactors(int n) {
    vector<int> factors;
    int sum = 0;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    
    for (int factor : factors) {
        sum += sumOfDigits(factor);
    }
    
    return sum;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        if (sumOfDigits(n) == sumOfPrimeFactors(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
