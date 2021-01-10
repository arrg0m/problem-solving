#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x - y >= -2 && x - y <= 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
