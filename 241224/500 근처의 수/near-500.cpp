#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], max_val=1, min_val=1000;
    for (int i=0; i<10; i++) {
        cin >> arr[i];
        if (arr[i] < 500 && max_val < arr[i]) max_val = arr[i];
        if (arr[i] > 500 && min_val > arr[i]) min_val = arr[i];
    }
    cout << max_val << ' ' << min_val;
    return 0;
}