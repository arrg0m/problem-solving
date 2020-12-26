#include <iostream>
using namespace std;


long long factorial(long n) {
    if (n == 0L) {
        return 1LL;
    } else {
        return (long long)n * factorial(n - 1);
    }
}


long long combination(long n, long m) {
    if (m == 0 || m == n) {
        return 1LL;
    } else {
        return combination(n-1, m-1) + combination(n-1, m);
    }
}

void solve(long n) {
    long m = n / 2L;
    cout << combination(n, m) * factorial(m - 1) * factorial(m - 1) / 2L << endl;
}


int main() {
    long n;
    cin >> n;
    solve(n);
    return 0;
}
