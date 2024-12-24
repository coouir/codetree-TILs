#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], n, p=0;
    cin >> n;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        if (num%2 == 0) {
            arr[p] = num;
            p++;
        }
    }

    for (int i=0; i<p; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}