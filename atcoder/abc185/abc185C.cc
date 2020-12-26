#include <iostream>
using namespace std;

int main() {
    long l;
    cin >> l;

    long ans = 1;
    for(int i=1; i<12; i++) {
        ans *= (l-i);
        ans /= i;
    }

    cout << ans << endl;

    return 0;
}
