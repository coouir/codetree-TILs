#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[110];

    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    for (int max_i=1; max_i<=10; max_i++) {
        int cnt = 0;
        int sum_val = 0;
        for (int i=0; i<n; i++) {
            if (sum_val + arr[i] > max_i) {
                sum_val = arr[i];
                cnt++;
            } else {
                sum_val += arr[i];
            }
        }
        if (m-1 == cnt) {
            cout << max_i;
            break;
        }
    }
    return 0;
}
