#include <iostream>
#include <vector>
using namespace std;

#define LARGE 1001

long solve(vector<vector<int>> c) {
    long mx = 0;
    int n = c.size();
    long res[2 * LARGE + 1] = {0};
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            res[i - j + (n - 1)] += c[i][j];
        }
    }
    for(int k=0; k < 2 * n + 1; k++) {
        if (res[k] > mx) {
            mx = res[k];
        }
    }
    return mx;
}


int main() {
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        int n;
        cin >> n;
        vector<vector<int>> c;
        for(int j=0; j<n; j++) {
            vector<int> row;
            for(int k=0; k<n; k++) {
                int tmp;
                cin >> tmp;
                row.push_back(tmp);
            }
            c.push_back(row);
        }
        cout << "Case #" << i << ": " << solve(c) << endl;
    }
    return 0;
}
