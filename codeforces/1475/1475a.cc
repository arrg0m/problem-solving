#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    long long m;
    for(int i=0; i<t; i++) {
        cin >> m;
        if((m & (m-1)) == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
