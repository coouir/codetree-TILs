#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[1000];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    int max = 0;
    for (int i=0; i<N; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            if (max < cnt) max = cnt;
            cnt = 1;
        } else {
            cnt++;
        }
    }
    cout << max;
    return 0;
}