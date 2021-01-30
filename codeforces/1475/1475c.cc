// TIMEOUT

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    int am, bm, k;

    int tmp;
    for(int i=0; i<t; i++) {
        cin >> am >> bm >> k;
        vector<int> a;
        for(int ii=0; ii<k; ii++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        vector<int> b;
        for(int ii=0; ii<k; ii++) {
            cin >> tmp;
            b.push_back(tmp);
        }

        long cnt = 0L;
        for(int j1=0; j1<k; j1++) {
            for(int j2=j1+1; j2<k; j2++) {
                if((a[j1] != a[j2]) && (b[j1] != b[j2])) {
                    cnt += 1;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
