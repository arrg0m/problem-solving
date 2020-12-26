#include <iostream>
#include <vector>
using namespace std;


int solve(vector<int> a, int n) {
    int from = 0, to = n-1;
    for(int i=0; i<n; i++){
        if (a[i] == 1) {
            from = i;
            break;
        }
    }

    for(int j=n-1; j>=0; j--) {
        if (a[j] == 1) {
            to = j;
            break;
        }
    }

    int cnt = 0;
    for(int i=from; i<=to; i++) {
        if (a[i] == 0) {
            cnt += 1;
        }
    }
    return cnt;
}


int main() {
    int t;
    cin >> t;

    int n, tmp;
    vector<int> a;
    for(int i=0; i<t; i++) {
        cin >> n;
        a.clear();
        for(int i=0; i<n; i++) {
            cin >> tmp;
            a.push_back(tmp);
        }

        cout << solve(a, n) << endl;

    }
    return 0;
}
