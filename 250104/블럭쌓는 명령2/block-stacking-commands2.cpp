#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[101]={}, N, K;
    cin >> N >> K;
    for (int i=0; i<K; i++) {
        int a, b;
        cin >> a >> b;
        for (; a<=b; a++) {
            arr[a]++;
        }
    }
    int M = 0;
    for (int i=0; i<N; i++) {
        if (M < arr[i]) M = arr[i];
    }
    cout << M;
    return 0;
}