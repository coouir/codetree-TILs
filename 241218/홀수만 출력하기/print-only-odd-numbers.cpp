#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, n;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> n;
        if (n%2 == 1 && n%3 == 0) {
            cout << n << endl;
        }
    }
    return 0;
}