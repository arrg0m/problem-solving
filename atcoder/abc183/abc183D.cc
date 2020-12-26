#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> s, t, p;

    int ss, tt, pp;
    for(int i=0; i<n; i++) {
        cin >> ss >> tt >> pp;
        s.push_back(ss);
        t.push_back(tt);
        p.push_back(pp);
    }

    int plan[200001] = {0};
    for(int i=0; i<n; i++){
        for(int j=s[i]; j<t[i]; j++) {
            plan[j] += p[i];
            if (plan[j] > w) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
