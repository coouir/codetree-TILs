#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool check = true;
    for (int i=0; i<5; i++) {
        int num;
        cin >> num;

        if (num%3 != 0) {
            check = false;
        }
    }

    cout << check;
    return 0;
}