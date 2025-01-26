#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    int max_val = 0;
    for (int i=0; i<n; i++) {
        int sum_val = arr[i];

        int index = i;
        for (int j=0; j<m-1; j++) {
            index = arr[index]-1;
            sum_val += arr[index];
        }
        max_val = max(max_val, sum_val);
    }
    cout << max_val;

    return 0;
}