#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[1000];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    int cnt = 1;
    int max = 0;
    for (int i=0; i<N; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            if (max < cnt) max = cnt;
            cnt = 1;
        } else {
            cnt++;
        }
    }
    if (max < cnt) max = cnt;
    cout << max;
    return 0;
}