#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int x;
        cin >> x;

        int a = x % 10;
        int b = 0;
        while(x > 0) {
            b += 1;
            x /= 10;
        }

        cout << (a - 1) * 10 + b * (b + 1) / 2 << endl;
    }

    return 0;
}
