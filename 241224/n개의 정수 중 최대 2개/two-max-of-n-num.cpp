#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, arr[100];
    cin >> N;
    
    for (int i=0; i<N; i++) {
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
    cout << arr[0] << " " << arr[1];
    return 0;
}