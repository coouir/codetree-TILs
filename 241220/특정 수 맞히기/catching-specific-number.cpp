#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while (true) {
        int num;
        cin >> num;

        if (num > 25) {
            cout << "Lower" << endl;
        } else if (num < 25) {
            cout << "Higher" << endl;
        } else {
            cout << "Good";
            break;
        }
    }
    return 0;
}