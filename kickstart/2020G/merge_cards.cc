#include <iostream>
#include <vector>
using namespace std;


float solve(vector<int> a) {
    int n = a.size();
    float sum = 0.0f;

    return 0.0;
}



int main() {
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        int n;
        cin >> n;
        vector<int> a;
        int tmp;
        for(int i=0; i<n; i++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        cout << "Case #" << i << ": " << solve(a) << endl;
    }

    return 0;
}
