#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    vector<int> a;
    vector<int> b;

    int tmp, tmq;
    for(int i=0; i<m; i++) {
        cin >> tmp >> tmq;
        a.push_back(tmp);
        b.push_back(tmq);
    }

    int cap = n;
    int last_b = 0;
    for(int i=0; i<m; i++) {
        int interval_outside = a[i] - last_b;
        cap -= interval_outside;
        if (cap <= 0) {
            cout << "No" << endl;
            return 0;
        }
        // cout << cap << endl;
        int interval_inside = b[i] - a[i];
        cap += interval_inside;
        if (cap > n) {
            cap = n;
        }
        last_b = b[i];
        // cout << cap << endl;
    }
    cap -= t - last_b;
    // cout << cap << endl;
    if (cap <= 0) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
