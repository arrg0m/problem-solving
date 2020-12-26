#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector<map<int, int>> multiple_of_8s;
    for (int i=13; i<125; i++) {
        int x = 8 * i;
        int a = x / 100;
        int b = (x - 100 * a) / 10;
        int c = x % 10;
        if (a == 0 || b == 0 || c == 0) {
            continue;
        }
        map<int, int> tmpm;
        tmpm[a] += 1;
        tmpm[b] += 1;
        tmpm[c] += 1;
        multiple_of_8s.push_back(tmpm);
    }


    string s;
    cin >> s;
    int n = s.length();
    if (n == 1) {
        if (s == "8") {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    } else if (n == 2) {
        int z = stoi(s);
        int p[2];
        p[0] = z / 10;
        p[1] = z % 10;
        if ((10 * p[0] + p[1]) % 8 == 0 || (10 * p[1] + p[0]) % 8 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    }

    int tmp;
    map<int, int> m;
    for (char c: s) {
        tmp = atoi(&c);
        m[tmp] += 1;
    }

    for(map<int, int> m8: multiple_of_8s) {
        bool res = true;
        for(int i=1; i<=9; i++) {
            if (m8[i] > m[i]) {
                res = false;
            }
        }
        if (res) {
            cout << "Yes" << endl;
            return 0;
        }
    }


    cout << "No" << endl;
    return 0;

}
