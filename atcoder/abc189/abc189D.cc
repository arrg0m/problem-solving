#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


long long solve(vector<string> s, int n) {
    if (n == 0) {
        return 1LL;
    } else {
        if (s[n - 1] == "OR") {  // OR
            return (long long) pow(2, n) + solve(s, n - 1);
        } else {  // AND
            return solve(s, n - 1);
        }
    }
}


int main() {
    int n;
    cin >> n;

    vector<string> s;
    string tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        s.push_back(tmp);
    }

    cout << solve(s, n) << endl;



    return 0;
}
