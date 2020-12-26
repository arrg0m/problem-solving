#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string tmp;
    int x[n][n];
    for(int i=0; i<n; i++) {
        cin >> tmp;
        for(int j=0; j<n; j++) {
            if ((i == 0 && j == 0) || (i == n-1 && j == n-1)) {
                x[i][j] = -1;
            } else {
                if (tmp[j] == '0') {
                    x[i][j] = 0;
                } else {
                    x[i][j] = 1;
                }
            }
        }
    }
    int p = x[0][1];
    int q = x[1][0];
    int r = x[n-2][n-1];
    int s = x[n-1][n-2];
    if (p == q && r == s) {
        if (p != r) {
            cout << 0 << endl;
            return;
        } else {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << 1 << endl;
        }
    } else if (p == q) {
        if (p == s) {
            cout << 1 << endl;
            cout << n << " " << n-1 << endl;
        } else {
            cout << 1 << endl;
            cout << n-1 << " " << n << endl;
        }
    } else if (r == s) {
        if (p == s) {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        } else {
            cout << 1 << endl;
            cout << 2 << " " << 1 << endl;
        }
    } else {
        if (p == s) {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << n-1 << " " << n << endl;
        } else {
            cout << 2 << endl;
            cout << 2 << " " << 1 << endl;
            cout << n-1 << " " << n << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        solve();
    }
}
