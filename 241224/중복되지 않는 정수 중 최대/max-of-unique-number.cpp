#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, arr[1000];
    cin >> N;

    for (int i=0; i<1000; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<N-1; i++) {
        for (int j=0; j<N-1-i; j++) {
            if (arr[j] < arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    int max_val = arr[0];
    if (arr[0] == arr[1]) {
        max_val = -1;
    }
    for (int i=1; i<N-1; i++) {
        if (arr[i] != arr[i-1] && arr[i] != arr[i+1]) {
            max_val = arr[i];
            break;
        }
    }
    cout << max_val;
    
    return 0;
}