#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[8], cnt=0, result=0;
    cin >> n;
    while (n>0) {
        arr[cnt++] = n%10;
        n /= 10;
    }
    for (int i=0; i<cnt; i++) {
        result = result*2 + arr[cnt-1-i];
    }
    cout << result;
    return 0;
}