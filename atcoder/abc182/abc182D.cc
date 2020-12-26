#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int tmp;
    vector<int> a;
    a.reserve(n * (n+1) / 2);
    for(int i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }

    long sum = 0;
    long maxval = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            sum += a[j];
            if (sum > maxval) {
                maxval = sum;
            }
        }
    }

    cout << maxval << endl;


    return 0;
}
