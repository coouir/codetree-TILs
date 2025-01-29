#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][2];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i][0] >> arr[i][1];
    
    int sum_val = 0;
    for (int n=1; n<=10; n++) {
        int index = 0;
        int test[100] = {};
        for (int j=0; j<N; j++) 
            if (arr[j][0] == n) test[index++] = arr[j][1];

        int cnt = 0;
        int check = test[0];
        for (int j=1; j<index; j++) {
            if (test[j] != check) cnt++;
            check = test[j];
        }
        sum_val += cnt;
    }
    cout << sum_val;

    return 0;
}


// 0     1
//  |   |
//  |   |
//  |   |
//  |   |

// N
// 3: 1 > 0 > 0 > 1
