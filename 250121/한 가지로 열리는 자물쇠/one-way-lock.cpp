#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            for (int k=1; k<=N; k++) {
                if (abs(a-i) <= 2 || abs(b-j) <= 2 || abs(c-k) <= 2) cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}