#include <iostream>
#include <vector>
using namespace std;


vector<int> find_substr(string s, string sub) {
    vector<int> indices;
    int n = s.length();
    int m = sub.length();
    for(int i=0; i <= n - m; i++) {
        bool res = true;
        for(int j=0; j<m; j++) {
            if (s[i + j] != sub[j]) {
                res = false;
            }
        }
        if (res) {
            indices.push_back(i);
        }
    }
    return indices;
}


int solve(string s) {
    vector<int> kick = find_substr(s, "KICK");
    vector<int> start = find_substr(s, "START");
    int res = 0;
    for(int k: kick) {
        for(int s: start) {
            if (k < s) {
                res += 1;
            }
        }
    }
    return res;
}


int main() {
    int t;
    cin >> t;

    string s;
    for(int i=1; i<=t; i++) {
        cin >> s;
        cout << "Case #" << i << ": " << solve(s) << endl;
    }
    return 0;
}
