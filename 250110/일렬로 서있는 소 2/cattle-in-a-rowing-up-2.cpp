#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, arr[100];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                if (arr[i] <= arr[j] && arr[j] <= arr[k]) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}