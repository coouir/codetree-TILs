#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];

    int i=0;
    while (true) {
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
        i++;
    }
    cout << arr[i-1] + arr[i-2] + arr[i-3];
    return 0;
}