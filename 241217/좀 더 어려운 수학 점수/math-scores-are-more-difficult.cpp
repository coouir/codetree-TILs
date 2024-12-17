#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int aM, aE, bM, bE;
    cin >> aM >> aE >> bM >> bE;

    if (aM > bM) {
        cout << 'A';
    } else if (aM < bM) {
        cout << 'B';
    } else {
        if (aE > bE) {
            cout << 'A';
        } else {
            cout << 'B';
        }
    }
    return 0;
}