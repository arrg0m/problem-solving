#include <iostream>
#include <vector>
using namespace std;


int solve(vector<int> a, int n) {
    bool identical = true;
    int maxidx = 0, maxval = a[0];
    if (n == 1) {
        return 1;
    }

    for(int i=1; i<n; i++) {
        if (a[i] != a[0]) {
            identical = false;
        }
        if (a[i] > maxval) {
            maxidx = i;
            maxval = a[i];
        }
    }
    if (identical) {
        return -1;
    }

    if (maxidx != 0 && maxidx != n-1) {
        return maxidx + 1;
    } else if (maxidx == 0) {
        for(int i=0; i<n; i++) {
            if (a[i] < maxval) {
                return i;
            }
        }
    } else {
        for(int i=n-1; i>=0; i--) {
            if (a[i] < maxval) {
                return i + 2;
            }
        }
    }
    return -1;
}


int main() {
    int t;
    cin >> t;

    int n, tmp;
    vector<int> a;
    for(int i=0; i<t; i++) {
        cin >> n;
        a.clear();
        for(int j=0; j<n; j++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        cout << solve(a, n) << endl;
    }

    return 0;
}
