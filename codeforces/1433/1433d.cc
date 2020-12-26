#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool comp(pair <int, int> a, pair <int, int> b) {
    return a.second < b.second;
}


void solve(vector<pair<int, int>> a, int n) {
    sort(a.begin(), a.end(), comp);
    if (a[0].second == a[n-1].second) {
        cout << "NO" << endl;
        return;
    }
    int num_first = 1;
    for(int i=1; i<n; i++) {
        if (a[i].second != a[0].second) {
            num_first = i;
            break;
        }
    }
    cout << "YES" << endl;
    for(int i=num_first; i<n; i++) {
        cout << a[0].first << " " << a[i].first << endl;
    }
    for(int i=1; i<num_first; i++) {
        cout << a[i].first << " " << a[num_first].first << endl;
    }
    return;

}


int main() {
    int t;
    cin >> t;

    int n, tmp;
    vector<pair<int, int>> a;

    for(int i=0; i<t; i++) {
        cin >> n;
        a.clear();
        for(int j=0; j<n; j++) {
            cin >> tmp;
            a.push_back(make_pair(j + 1, tmp));
        }
        solve(a, n);
    }
    return 0;
}
