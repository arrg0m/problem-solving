#include <iostream>
#include <vector>
#include <tuple>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    long n, cc;
    cin >> n >> cc;
    vector<tuple<long, long, long>> x;
    map<long, long> inflow;
    map<long, long> outflow;
    set<long> coord;

    long p, q, r;
    for(long i=0; i<n; i++) {
        cin >> p >> q >> r;
        x.push_back(make_tuple(p, q, r));
        inflow[p] += r;
        outflow[q] += r;
        coord.insert(p);
        coord.insert(q);
    }
    vector<long> v;
    v.assign(coord.begin(), coord.end());
    sort(v.begin(), v.end());
    long amt = 0;
    long long cost = 0LL;
    long cur, nxt;
    for(long i=0; i<v.size(); i++) {
        cur = v[i];
        nxt = v[i+1];
        if (i == v.size() - 1) {
            nxt = cur + 1;
        }

        amt += inflow[cur];
        // cout << amt << " or " << cc << " : " << cur << "->" << nxt << endl;
        cost += (nxt - cur) * min(amt, cc);
        if (outflow[cur] > 0) {
            long diff = - min(amt, cc) + min(amt + outflow[cur], cc);
            // cout << "adjust by " << diff << endl;
            cost += diff;
        }
        amt -= outflow[nxt];
    }
    cout << cost << endl;
    return 0;
}
