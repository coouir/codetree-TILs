#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sum_val = 0;
    for (int i=0; i<10; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }
    cout << sum_val;
    return 0;
}