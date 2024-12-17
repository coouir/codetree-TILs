#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double L, R;
    cin >> L >> R;

    if (L >= 1 && R >= 1) {
        cout << "High";
    } else if (L >= 0.5 && R >= 0.5) {
        cout << "Middle";
    } else {
        cout << "Low";
    }
    return 0;
}