#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, cnt = 0;
    cin >> N;

    while (true) {
        if (N == 1) {
            cout << cnt;
            break;
        }

        if (N%2 == 0) {
            N /= 2;
        } else {
            N = 3*N + 1;
        }
        cnt++;
    }
    return 0;
}