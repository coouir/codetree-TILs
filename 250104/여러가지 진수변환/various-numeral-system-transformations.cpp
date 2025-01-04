#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, B, arr[1000], cnt=0;
    cin >> N >> B;
    while (true) {
        if (N < B) {
            arr[cnt] = N;
            break;
        } else {
            arr[cnt++] = N%B;
            N /= B;
        }
    }
    for (int i=cnt; i>=0; i--) {
        cout << arr[i];
    }
    return 0;
}