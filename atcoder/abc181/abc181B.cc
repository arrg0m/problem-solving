#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    long sum = 0L;
    long a, b;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        sum += b * (b + 1) / 2 - a * (a - 1) / 2;
    }
    cout << sum << endl;

    return 0;

}
