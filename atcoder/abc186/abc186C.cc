#include <iostream>
using namespace std;

bool seven_in_decimal(int m) {
    while (m > 0) {
        if (m % 10 == 7) {
            return true;
        }
        m /= 10;
    }
    return false;
}

bool seven_in_octal(int m) {
    while (m > 0) {
        if (m % 8 == 7) {
            return true;
        }
        m /= 8;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i=1; i<=n; i++) {
        cnt += seven_in_octal(i) || seven_in_decimal(i);
    }
    cout << n - cnt << endl;

    return 0;
}
