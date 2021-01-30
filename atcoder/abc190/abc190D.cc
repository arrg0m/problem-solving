#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;

    int cnt = 0;
    for(long k = 1; k * k <= 2 * n; k++) {
        if (((2 * n) % k == 0) && ((k + (2 * n) / k) % 2 == 1)) {
            // cout << (-k + (2 * n) / k + 1) / 2 << ", " << (k + (2 * n) / k - 1) / 2 << endl;
            cnt += 1;
        }
    }
    cout << 2 * cnt << endl;
    return 0;
}
