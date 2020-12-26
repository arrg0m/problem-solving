#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(tuple<int, int, int> a, tuple<int, int, int> b){
    if (get<2>(a) != get<2>(b)) {
        return get<2>(a) < get<2>(b);
    } else {
        return get<0>(a) < get<0>(b);
    }
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    int n, x, a, rot;
    vector<tuple<int, int, int> > waitlist;

    for (int i=1; i<=t; i++) {
        waitlist.clear();
        cin >> n >> x;
        for (int j=1; j<=n; j++) {
            cin >> a;
            rot = a / x;
            a = a % x;
            if (a == 0) rot--;
            waitlist.push_back(make_tuple(j, a, rot));
        }
        sort(waitlist.begin(), waitlist.end(), cmp);
        cout << "Case #" << i << ": ";
        for (tuple<int, int, int> customer: waitlist) {
            cout << get<0>(customer) << " ";
        }
        cout << "\n";
    }
}

