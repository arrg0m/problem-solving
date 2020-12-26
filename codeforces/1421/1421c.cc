#include <iostream>
using namespace std;

bool is_palindrome(string s) {
    int n = s.length();
    if (n == 1) {
        return true;
    } else {
        for(int i=0; i<n/2; i++) {
            if (s[i] != s[n-1-i]) {
                return false;
            }
        }
        return true;
    }
}


int main() {
    string s;
    cin >> s;
    if (is_palindrome(s)) {
        cout << 0 << endl;
        return 0;
    }
    return 0;
}
