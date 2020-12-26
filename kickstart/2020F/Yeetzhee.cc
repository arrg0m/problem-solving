#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, m, k;
    int a[50];

    float ans;
    for(int i=1; i<=t; i++) {
        ans = 0;
        cin >> n >> m >> k;
        for(int j=0; j<k; j++) {
            cin >> a[j];
        }
        if (n == 2) {
            if (a[0] == 1 && a[1] == 1) {
                ans = 1.0 + (1.0 * m) / (m-1);
            }
        } else if (n == 3) {
            if (a[0] == 1 && a[1] == 1 && a[2] == 1) {
                ans = 1.0 + (1.0 * m) / (m-1) + (1.0 * (m-1)) / (m-2);
            } else if (a[0] == 1 && a[1] == 2) {


            }


        } else if (n == 4) {



        } else if (n == 5) {



        } else if (n == 6) {



        }
        cout << "Case #" << i << ": " << ans << endl;


    }
}
