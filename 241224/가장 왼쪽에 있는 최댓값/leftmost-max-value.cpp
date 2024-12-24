#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, arr[1000];
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int idx=N;
    while (true) {
        int max_p = 0;
        for (int i=0; i<idx; i++) {
            if (arr[max_p] < arr[i]) {
                max_p = i;
            }
        }
        cout << max_p+1 << ' ';
        idx = max_p;
        if (max_p == 0) break;
    }

    return 0;
}