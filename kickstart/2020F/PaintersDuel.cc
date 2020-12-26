#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool custom_contains(vector<pair<int, int>> x, pair<int, int> q) {
    return find(x.begin(), x.end(), q) != x.end();
}

int main() {
    int t;
    cin >> t;

    int s, ra, pa, rb, pb, c;
    vector<pair<int, int> > con;
    int tmpx, tmpy;
    int score;
    for(int i=1; i<=t; i++) {
        con.clear();
        cin >> s >> ra >> pa >> rb >> pb >> c;
        for(int j=0; j<c; j++) {
            cin >> tmpx >> tmpy;
            con.push_back(make_pair(tmpx, tmpy));
        }
        if (con.size() == 0) {
            if (rb == 2 && pb == 2) {
                score = -1;
            } else if (ra == 2 && pa == 2) {
                score = 1;
            } else {
                score = 2;
            }
        } else if (con.size() == 1) {
            if (custom_contains(con, make_pair(2, 2))) {
                score = 0;
            } else if (rb == 2 && pb == 2) {
                score = -1;
            } else {
                score = 1;
            }
        } else {
            score = 0;
        }
        cout << "Case #" << i << ": " << score << endl;
    }
}
