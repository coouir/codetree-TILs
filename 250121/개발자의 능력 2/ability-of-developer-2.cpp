#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[6];
    for (int i=0; i<6; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+6);

    int max_val = max(arr[5]+arr[0], max(arr[4]+arr[1], arr[3]+arr[2]));
    int min_val = min(arr[5]+arr[0], min(arr[4]+arr[1], arr[3]+arr[2]));
    cout << max_val - min_val;
    return 0;
}