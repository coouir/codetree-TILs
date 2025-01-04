#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[100000], cnt=0;
    cin >> n;

    while (n >= 2) {
        arr[cnt++] = n%2;
        n /= 2;
    }
    arr[cnt] = n;

    for (int i=cnt; i>=0; i--) {
        cout << arr[i];
    } 
    return 0;
}