#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a, b;

    int tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0; i<n; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }

    long sum = 0L;
    for(int i=0; i<n; i++) {
        sum += a[i] * b[i];
    }

    if (sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}
