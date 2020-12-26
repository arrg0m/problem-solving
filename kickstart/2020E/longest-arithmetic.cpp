#include<iostream>
using namespace std;


long solve(long n) {
    long hist_length = 0;
    long curr_diff = 0;
    long curr_length = 0;

    long cur;
    long prv;

    cin >> prv >> cur;
    curr_diff = cur - prv;
    curr_length = 2;

    for(long j=2; j<n; j++) {
        prv = cur;
        cin >> cur;
        long tmp_diff = cur - prv;
        if(curr_diff == tmp_diff) {
            curr_length += 1;
        } else {
            hist_length = max(hist_length, curr_length);
            curr_diff = tmp_diff;
            curr_length = 2;
        }
    }
    hist_length = max(hist_length, curr_length);
    return hist_length;
}


int main(void) {
    long t;
    cin >> t;
    for(long i=0; i<t; i++) {
        long n;
        cin >> n;

        long res = solve(n);
        cout << "Case #" << i + 1 << ": " << res << endl;
    }
    return 0;
}
