#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    cout << min(a1, min(a2, min(a3, a4))) << endl;
    return 0;
}
