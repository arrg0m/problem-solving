#include <iostream>
using namespace std;

int main() {
    int n;
    int x;
    cin >> n >> x;
    int cur = 0;

    int v, p;
    for(int i=1; i<=n; i++) {
        cin >> v >> p;
        cur += v * p;
        if (cur > 100 * x) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
