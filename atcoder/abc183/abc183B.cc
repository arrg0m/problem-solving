#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    cout << fixed << setprecision(20);
    cout << (sx * gy + sy * gx) / (sy + gy) << endl;

    return 0;
}
