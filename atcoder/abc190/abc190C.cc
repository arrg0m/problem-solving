#include <iostream>
#include <vector>
#include <set>
using namespace std;


int condition_check(int k, vector<pair<int, int>> ab, vector<pair<int, int>> cd) {
    int num_satisfied = 0;
    set<int> numbers;
    for(pair<int, int> p: cd) {
        if (k % 2 == 0) {
            numbers.insert(p.first);
        } else {
            numbers.insert(p.second);
        }
        k /= 2;
    }

    for(pair<int, int> p: ab) {
        if (numbers.find(p.first) != numbers.end() && numbers.find(p.second) != numbers.end()) {
            num_satisfied += 1;
        }
    }

    return num_satisfied;
}



int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> ab;

    int tmpa, tmpb;
    for(int i=0; i<m; i++) {
        cin >> tmpa >> tmpb;
        ab.push_back(make_pair(tmpa, tmpb));
    }

    int k;
    cin >> k;
    vector<pair<int, int>> cd;
    for(int i=0; i<k; i++) {
        cin >> tmpa >> tmpb;
        cd.push_back(make_pair(tmpa, tmpb));
    }

    int max_val = 0;
    int tmp_val;
    for(int i=0; i<(1 << k); i++) {
        tmp_val = condition_check(i, ab, cd);
        if (tmp_val > max_val) {
            max_val = tmp_val;
        }
    }
    cout << max_val << endl;

    return 0;
}
