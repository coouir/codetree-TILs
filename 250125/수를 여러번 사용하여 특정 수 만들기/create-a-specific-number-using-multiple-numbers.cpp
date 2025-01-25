#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int max_val = 0;

    int A, B, C;
    cin >> A >> B >> C;
    for (int i=0; i<=1000; i++) {
        for (int j=0; j<=1000; j++) {
            if (A*i + B*j > C) break;
            max_val = max(max_val, A*i + B*j);
        }
    }
    cout << max_val;

    return 0;
}