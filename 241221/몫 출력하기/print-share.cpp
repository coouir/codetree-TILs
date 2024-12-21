#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0, num;

    while (true) {
        cin >> num;

        if (cnt == 3) {
            break;
        }

        if (num%2 == 0) {
            cout << num/2 << endl;
            cnt++;
        }
    }
    
    return 0;
}