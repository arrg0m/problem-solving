#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> p;

    int xx, yy;
    for(int i=0; i<n; i++) {
        cin >> xx >> yy;
        p.push_back(make_pair(xx, yy));
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                pair<int, int> x = p[i];
                pair<int, int> y = p[j];
                pair<int, int> z = p[k];
                if ((y.second - x.second) * (z.first - y.first) == (z.second - y.second) * (y.first - x.first)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;

}
