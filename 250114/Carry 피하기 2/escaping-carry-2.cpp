#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, arr[20];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans = -1;
    for (int i=0; i<n-2; i++) {
        for (int j=i+1; j<n-1; j++) {
            for (int k=j+1; k<n; k++) {
                int x = arr[i], y = arr[j], z = arr[k];
                bool check = true;
                while (max(x, max(y, z)) > 0) {
                    if (x%10 + y%10 + z%10 > 9) {
                        check = false;
                        break;
                    }
                    x /= 10;
                    y /= 10;
                    z /= 10;
                }
                if (check && ans < arr[i]+arr[j]+arr[k]) ans = arr[i]+arr[j]+arr[k]; 
            }
        }
    }
    cout << ans;
    return 0;
}

// n개의 숫자 중 3개 선택
// carry x -> 합의 최댓값
// 수 + 수 -> 각 자리수 10이상 x
