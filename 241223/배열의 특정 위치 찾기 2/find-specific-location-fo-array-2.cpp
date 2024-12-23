#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sumO=0, sumE=0;
    for (int i=0; i<10; i++) {
        cin >> arr[i];
        if (i%2 == 0) {
            sumO += arr[i];
        } else {
            sumE += arr[i];
        }
    }
    if (sumO >= sumE) {
        cout << sumO-sumE;
    } else {
        cout << sumE-sumO;
    }
    return 0;
}