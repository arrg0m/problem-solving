#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a;

    int minval = 101;
    int tmp;
    for(int i=0; i<h; i++) {
        vector<int> tmpvec;
        for(int j=0; j<w; j++) {
            cin >> tmp;
            minval = min(tmp, minval);
            tmpvec.push_back(tmp);
        }
        a.push_back(tmpvec);
    }

    int sum = 0;
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            sum += a[i][j] - minval;
        }
    }
    cout << sum << endl;

    return 0;
}
