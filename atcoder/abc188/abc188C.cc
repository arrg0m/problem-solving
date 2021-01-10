#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long max_left = 0L;
    int max_left_pos = 0;
    long max_right = 0L;
    int max_right_pos = 0;

    long tmp;
    for(int i=1; i<=(1 << (n-1)); i++) {
        cin >> tmp;
        if (tmp > max_left) {
            max_left = tmp;
            max_left_pos = i;
        }
    }

    for(int i=(1 << (n-1)) + 1; i<=(1 << n); i++) {
        cin >> tmp;
        if (tmp > max_right) {
            max_right = tmp;
            max_right_pos = i;
        }
    }

    if (max_left > max_right) {
        cout << max_right_pos << endl;
    } else {
        cout << max_left_pos << endl;
    }


    return 0;
}
