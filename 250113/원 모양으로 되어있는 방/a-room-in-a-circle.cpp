#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[1004];
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
    }
    int min_val = INT_MAX;
    for (int i=1; i<=N; i++) {
        int sum_val = 0;
        for (int j=1; j<=N; j++) {
            if (i == j) continue;
            if (j < i) {
                sum_val += (N-i+j)*arr[j];
            } else {
                sum_val += (j-i)*arr[j];
            }
        }
        if (sum_val < min_val) min_val = sum_val;
    }
    cout << min_val;
    return 0;
}