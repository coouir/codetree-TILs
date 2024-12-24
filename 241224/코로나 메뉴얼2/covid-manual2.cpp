#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4] = {0};
    for (int i=0; i<3; i++) {
        char c;
        int t;
        cin >> c >> t;
        if (c == 'Y' && t >= 37) {
            arr[0]++;
        } else if (c == 'N' && t >= 37) {
            arr[1]++;
        } else if (c == 'Y') {
            arr[2]++;
        } else {
            arr[3]++;
        }
    }

    for (int i=0; i<4; i++) {
        cout << arr[i] << ' ';
    }
    if (arr[0] >= 2) {
        cout << 'E';
    }
    return 0;
}