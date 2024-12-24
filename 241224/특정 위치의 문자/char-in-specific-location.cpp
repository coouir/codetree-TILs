#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'}, c;
    int idx = -1;
    cin >> c;

    for (int i=0; i<6; i++) {
        if (c == arr[i]) {
            idx = i;
        }
    }
    if (idx != -1) {
        cout << idx;
    } else {
        cout << "None";
    }
    return 0;
}