#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100000];

    int N, S;
    cin >> N >> S;
    for (int i=0; i<N; i++)
        cin >> arr[i];
    
    int min_val = 1<<30, total = arr[0];
    int s = 0;
    int e = 0;
    while (e < N) {
        // 정답
        if (total >= S) min_val = min(min_val, e-s+1);

        // 이동
        if (total >=S) {
            total -= arr[s];
            s++;
        } else {
            e++;
            total += arr[e];
        }
    }
    cout << min_val;

    return 0;
}

// 5   1   3   5   10  7   4   9   2   8
// s
//     e