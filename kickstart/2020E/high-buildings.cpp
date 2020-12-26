#include<iostream>
using namespace std;


void solve(int n, int a, int b, int c, int i) {
    cout << "Case #" << i+1 << ": ";
    if (a + b - c > n || a > n || b > n || c > n || a < c || b < c) {
        cout << "IMPOSSIBLE";
    } else if (n == 1) {
        if (a == 1 & b == 1 & c == 1) {
            cout << "1";
        } else {
            cout << "IMPOSSIBLE";
        }
    } else if (n == 2) {
        if (a == 2 & b == 2 & c == 2) {
            cout << "2 2";
        } else if (a == 2 & b == 1 & c == 1) {
            cout << "1 2";
        } else if (a == 1 & b == 2 & c == 1) {
            cout << "2 1";
        } else {
            cout << "IMPOSSIBLE";
        }
    } else if (c == a & c == b) {
        if (c == n) {
            for(int i=0; i<n; i++) {
                cout << 3 << " ";
            }
        } else if (c == 1) {
            cout << "IMPOSSIBLE";
        } else {
            for(int i=0; i<c-1; i++) {
                cout << 3 << " ";
            }
            for(int i=0; i<n-c; i++) {
                cout << 1 << " ";
            }
            cout << 3;
        }
    } else if (c == a) {
        for(int i=0; i<c; i++) {
            cout << 3 << " ";
        }
        for(int i=0; i<n-c-(b-c); i++) {
            cout << 1 << " ";
        }
        if (b > c) {
            for(int i=b-c; i>=2; i--) {
                cout << 2 << " ";
            }
            cout << 2;
        }
    } else if (c == b) {
        for(int i=1; i<=a-c; i++) {
            cout << 2 << " ";
        }
        for(int i=0; i<n-c-(a-c); i++) {
            cout << 1 << " ";
        }
        if (c > 0) {
            for(int i=0; i<c-1; i++) {
                cout << 3 << " ";
            }
            cout << 3;
        }
    } else {
        for(int i=1; i<=a-c; i++) {
            cout << 2 << " ";
        }
        for(int i=0; i<n-(a+b-c); i++) {
            cout << 1 << " ";
        }
        for(int i=0; i<c; i++) {
            cout << 3 << " ";
        }
        if(b > c) {
            for(int i=b-c; i>=2; i--) {
                cout << 2 << " ";
            }
            cout << 2;
        }
    }
    cout << endl;
}

int main(void) {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        solve(n, a, b, c, i);
    }
    return 0;
}
