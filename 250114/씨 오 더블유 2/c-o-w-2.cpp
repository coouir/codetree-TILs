#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[101];
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i=0; i<N-2; i++) {
        for (int j=i+1; j<N-1; j++) {
            for (int k=j+1; k<N; k++) {
                if (arr[i] == 'C' && arr[j] == 'O' && arr[k] == 'W') cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}