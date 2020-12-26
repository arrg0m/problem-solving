#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n, k;
    vector<pair<int, int> > intervals;
    int ss, ee;

    int num_robot, remain_capacity, interval_length, prev_end = 0;
    for(int i=1; i<=t; i++) {
        intervals.clear();
        cin >> n >> k;
        for(int j=1; j<=n; j++) {
            cin >> ss >> ee;
            intervals.push_back(make_pair(ss, ee));
        }
        sort(intervals.begin(), intervals.end());

        num_robot = 0;
        remain_capacity = 0;
        interval_length = 0;
        prev_end = 0;
        for (pair<int, int> interval: intervals) {
            interval_length = interval.second - interval.first;
            if (remain_capacity > prev_end - interval.first) {
                remain_capacity -= interval.first - prev_end;
                if (remain_capacity > 0) {
                    if (interval_length <= remain_capacity) {
                        remain_capacity -= interval_length;
                        interval_length = 0;
                    } else {
                        interval_length -= remain_capacity;
                        remain_capacity = 0;
                    }
                } else {
                    remain_capacity = 0;
                }
            } else {
                remain_capacity = 0;
            }
            while (interval_length > k) {
                num_robot += 1;
                interval_length -= k;
            }
            if (interval_length > 0) {
                num_robot += 1;
                remain_capacity += k - interval_length;
            }
            prev_end = interval.second;
            // cout << "> " << num_robot << " " << remain_capacity << endl;
        }
        cout << "Case #" << i << ": " << num_robot << "\n";
    }
}
