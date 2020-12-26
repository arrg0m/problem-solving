#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int evalCost(vector<vector<int>> &t, vector<int> order) {
    int prv;
    int cur = 0;

    int totalCost = 0;
    for(int x: order) {
        prv = cur;
        cur = x + 1;
        totalCost += t[prv][cur];
    }
    totalCost += t[cur][0];
    return totalCost;
}


int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> t;
    int tmp;
    vector<int> tmpvec;
    for(int i=0; i<n; i++) {
        tmpvec.clear();
        for(int j=0; j<n; j++) {
            cin >> tmp;
            tmpvec.push_back(tmp);
        }
        t.push_back(tmpvec);
    }

    vector<int> x;
    for(int i=0; i<n-1; i++) {
        x.push_back(i);
    }
    int cntEqual = 0;
    do {
        cntEqual += (evalCost(t, x) == k);
    } while(next_permutation(x.begin(), x.end()));
    cout << cntEqual << endl;

    return 0;
}
