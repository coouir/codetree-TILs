#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], check[10]={0}, n=0;
    while (true) {
        cin >> arr[n];
        if (arr[n]/10 != 0) {
            check[arr[n]/10]++;
        }
        if (arr[n] == 0) {
            break;
        }
        n++;
    }
    for (int i=1; i<10; i++) {
        cout << i << " - " << check[i] << endl;
    }

    return 0;
}