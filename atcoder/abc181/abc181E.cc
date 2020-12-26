#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> h;
    vector<int> w;

    int tmp;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        h.push_back(tmp);
    }
    sort(h.begin(), h.end());
    for (int i=0; i<m; i++) {
        cin >> tmp;
        w.push_back(tmp);
    }

    long minSum = 100000000000000L;
    long sum;
    for (int wval: w) {
        int sign = -1;
        sum = 0;
        bool used = false;

        if (wval < h[0]) {
            used = true;
            sum += sign * wval;
            sign = -sign;
        }
        for (int hval: h) {
            if (!used && hval > wval) {
                used = true;
                sum += sign * wval;
                sign = -sign;
            }
            sum += sign * hval;
            sign = -sign;
        }
        if (!used) {
            sum += sign * wval;
        }
        if (sum < minSum) {
            minSum = sum;
        }
    }
    cout << minSum << endl;

    return 0;

}
