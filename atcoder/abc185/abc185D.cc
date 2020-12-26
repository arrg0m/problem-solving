#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int apply(vector<int> diff, int k) {
    int cnt = 0;
    for(int val: diff) {
        if (val < k) {
            return -1;
        } else {
            cnt += (val - 1) / k + 1;
        }
    }
    return cnt;
}


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else if (a < b) {
        return gcd(b, a);
    } else {
        return gcd(b, a % b);
    }
}



int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    int tmp;
    for(int i=0; i<m; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }

    if (n == m) {
        cout << 0 << endl;
        return 0;
    }

    if (m == 0) {
        cout << 1 << endl;
        return 0;
    }
    sort(a.begin(), a.end());

    vector<int> diff;

    int mx = 0;
    int sum = 0;

    if (a[0] > 1) {
        mx = a[0] - 1;
        sum = a[0] - 1;
        diff.push_back(a[0] - 1);
    }
    for(int i=1; i<m; i++) {
        diff.push_back(a[i] - a[i-1] - 1);
        mx = max(mx, a[i] - a[i-1] - 1);
        sum += a[i] - a[i-1] - 1;
    }
    if (a[m-1] < n) {
        diff.push_back(n - a[m-1]);
        mx = max(mx, n - a[m-1]);
        sum += n - a[m-1];
    }

    sort(diff.begin(), diff.end(), greater<int>());
    for (int k: diff) {
        tmp = apply(diff, k);
        if (tmp > 0) {
            cout << tmp << endl;
            return 0;
        }
    }


    return 0;
}
