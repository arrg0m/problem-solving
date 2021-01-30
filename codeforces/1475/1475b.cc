#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n;
    for(int i=0; i<t; i++) {
        cin >> n;
        int m = n / 2020;
        int r = n % 2020;
        if (r <= m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
