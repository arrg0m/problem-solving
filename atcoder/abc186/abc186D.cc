#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> a;
    long tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());

    long long res = 0L;
    long weight = 1 - n;
    for(int i=0; i<n; i++) {
        res += a[i] * weight;
        weight += 2;
    }
    cout << res << endl;

    return 0;
}
