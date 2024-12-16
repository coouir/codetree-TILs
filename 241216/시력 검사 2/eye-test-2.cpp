#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double rn;
    cin >> rn;

    if (rn >= 1.0) {
        cout << "High";
    } else if (rn >= 0.5) {
        cout << "Middle";
    } else {
        cout << "Low";
    }
    return 0;
}