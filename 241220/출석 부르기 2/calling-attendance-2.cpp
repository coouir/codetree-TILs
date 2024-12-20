#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while (true) {
        int num;
        cin >> num;

        if (num == 1) {
            cout << "John" << endl;
        } else if (num == 2) {
            cout << "Tom" << endl;
        } else if (num == 3) {
            cout << "Paul" << end;;
        } else if (num == 4) {
            cout << "Sam" << endl;
        } else {
            cout << "Vacancy";
            break;
        }
    }
    return 0;
}