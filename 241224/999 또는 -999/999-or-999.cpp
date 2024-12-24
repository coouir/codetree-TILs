#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], i;
    for (i=0; i<100; i++) {
        cin >> arr[i];
        if (arr[i] == 999 || arr[i] == -999) break;
    }
    int max_val = arr[0] ,min_val = arr[0];
    for (int j=0; j<i; j++) {
        if (max_val < arr[j]) max_val = arr[j];
        if (min_val > arr[j]) min_val = arr[j];
    }

    cout << max_val << ' ' << min_val;
    return 0;
}