#include <iostream>
#include <vector>
using namespace std;


#define N 1000000000L


int solve(vector<int> x, int n) {
    long tmp, diff;
    long mn = N * N;
    for(int i=1; i<=n; i++) {
        tmp = 0;
        for(int curr: x) {
            diff = i > curr ? i - curr : curr - i;
            tmp += (diff > n - diff ? n - diff : diff);
        }
        if (tmp < mn) {
            mn = tmp;
        }
    }

    return mn;
}


int main() {
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        int w, n;
        cin >> w >> n;
        vector<int> x;
        int tmp;
        for(int i=0; i<w; i++) {
            cin >> tmp;
            x.push_back(tmp);
        }
        cout << "Case #" << i << ": " << solve(x, n) << endl;
    }
}
