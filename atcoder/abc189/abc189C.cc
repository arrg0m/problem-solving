#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> a;
    cin >> n;

    int tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }

    int maxamt = a[0];
    for(int l=0; l<n; l++) {
        int minval = a[l];
        for(int r=l; r<n; r++) {
            if (minval > a[r]) {
                minval = a[r];
            }
            if (maxamt < (r - l + 1) * minval) {
                maxamt = (r - l + 1) * minval;
            }
        }
    }
    cout << maxamt << endl;
    return 0;
}
