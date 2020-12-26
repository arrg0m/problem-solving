#include<iostream>
#include<vector>
using namespace std;


bool r_order(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second < b.second);
}

bool inv_r_order(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second > b.second);
}

int main(void) {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;
        vector<pair<int, int> > x(n);
        for(int j=0; j<n; j++) {
            int _e, _r;
            cin >> _e >> _r;
            x.push_back(make_pair(_e, _r));
        }
        sort(x.begin(), x.end(), r_order);
        vector<pair<int, int> > y(x);

        int cnt_inef = 0;
        bool not_changed = false;

        while (!not_changed) {
            int sum_e = 0;
            for(auto const& value: x) {
                sum_e += value.first;
            }
            not_changed = true;
            for(vector<pair<int, int> >::iterator it = x.begin(); it != x.end(); ++it) {
                if (it->first + it->second > sum_e) {
                    cnt_inef += 1;
                    not_changed = false;
                    it = x.erase(it);
                    break;
                }
            }
        }

        if(cnt_inef < n) {
            cout << "Case #" << i+1 << ": " << cnt_inef << " INDEFINITELY" << endl;
        } else {
            int best_rmv_cnt = 0;
            int best_length = -1;

            int curr_rmv_cnt = 0;
            sort(y.begin(), y.end(), inv_r_order);
            while (!y.empty()) {
                int sum_e = 0;
                for(auto const& value: y) {
                    sum_e += value.first;
                }
                int curr_length = sum_e;
                for(vector<pair<int, int> >::iterator it = y.begin(); it != y.end(); ++it) {
                    int _e = it -> first;
                    int _r = it -> second;
                    curr_length += _e;
                    if (sum_e < _r + _e) {
                        break;
                    }
                }
                if (best_length < curr_length) {
                    best_length = curr_length;
                    best_rmv_cnt = curr_rmv_cnt;
                }
                y.pop_back();
                curr_rmv_cnt += 1;
            }
            cout << "Case #" << i + 1 << ": " << best_rmv_cnt << " " << best_length << endl;
        }
    }
    return 0;
}
