#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x, y;
    cin >> x >> y;
    int arr[10] = {x, y};
    for (int i=2; i<10; i++) {
        arr[i] = (arr[i-1] + arr[i-2])%10;
    }

    for (int i=0; i<10; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}