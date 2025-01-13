#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int N, x[100], y[100];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
    }
    int min_val = INT_MAX;
    for (int i=1; i<N-1; i++) {
        int d = 0;
        int p1 = x[0], p2 = y[0];
        for (int j=1; j<N; j++) {
            if (i == j) continue;
            d += (abs(p1-x[j]) + abs(p2-y[j]));
            p1 = x[j];
            p2 = y[j];
        }
        if (d < min_val) min_val = d;
    }
    cout << min_val;
    return 0;
}