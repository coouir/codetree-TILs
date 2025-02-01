#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[110];

    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++) 
        cin >> arr[i];
    
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        if (arr[i] == 1) {
            int wifi = i + m;
            cnt++;
            for (int j=0; j<=n; j++) {
                if ((wifi-m <= j && j <= wifi+m) && arr[j] == 1) arr[j] = 0;
            }
        }
    }
    cout << cnt;

    return 0;
}

// 1   2   3   4   5   6
// 1   1   0   1   1   1
//     W           W


// 1   0   1   0   1   1
//     W               W

// 1   0   0   1   1   0
//     W           W