#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num, arr[100], cnt=0;
    cin >> num;

    for (int i=0; i<10; i++) {
        arr[i] = num*(i+1);
        cout << arr[i] << ' ';
        if (arr[i]%5 == 0) {
            cnt++;
        }
        if (cnt == 2) {
            break;
        }
    }
    return 0;
}