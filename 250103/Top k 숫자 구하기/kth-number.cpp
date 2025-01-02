#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N, k, arr[1000];
    cin >> N >> k;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    cout << arr[k-1];
    return 0;
}