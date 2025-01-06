#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[1000];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    int cnt=1, max=0;
    for (int i=0; i<N; i++) {
        if (i >= 1 && arr[i-1] < arr[i]) {
            cnt++;
        } else {
            cnt = 1;
        }
        if (max < cnt) max = cnt;
    }
    cout << max;
    return 0;
}