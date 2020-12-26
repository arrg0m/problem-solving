#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    int tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }

    int maxval = 1;
    int maxcnt = 0;
    for(int i=2; i<=1000; i++) {
        int tmpcnt = 0;
        for(int x: a) {
            if (x % i == 0) {
                tmpcnt += 1;
            }
        }
        if (tmpcnt > maxcnt) {
            maxcnt = tmpcnt;
            maxval = i;
        }
    }
    cout << maxval << endl;

    return 0;
}
