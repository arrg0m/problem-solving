#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int zero = 0;
    int one = 0;
    int two = 0;

    for(char c: s) {
        switch ((c - '0') % 3) {
            case 0:
                zero += 1;
                break;
            case 1:
                one += 1;
                break;
            case 2:
                two += 1;
                break;
        }
    }
    if (one % 3 == two % 3) {
        cout << 0 << endl;
        return 0;
    }

    while (one > 3 && two > 3) {
        one--;
        two--;
    }
    while (one > 6) {
        one -= 3;
    }
    while (two > 6) {
        two -= 3;
    }
    int sml = min(one, two);
    int lar = max(one, two);

    long unsigned int ans = -1;
    if (sml % 3 == lar % 3) {
        ans = 0;
    } else if (sml == 0) {
        ans = lar % 3;
    } else if (sml == 1) {
        if (lar % 3 == 1) {
            ans = 0;
        } else {
            ans = 1;
        }
    } else if (sml == 2) {
        if (lar % 3 == 2) {
            ans = 0;
        } else {
            ans = 1;
        }
    }

    if (ans >= s.length()) {
        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;
    return 0;
}
