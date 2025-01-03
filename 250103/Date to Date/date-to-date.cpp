#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m1 >> d1 >> m2 >> d2;

    int s = d1;
    for (int i=1; i<m1; i++) {
        s += num_of_days[i];
    }

    int e = d2;
    for (int i=1; i<m2; i++) {
        e += num_of_days[i];
    }

    cout << e-s+1;
    return 0;
}