#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int N, L;
    cin >> N >> L;
    for (int i=0; i<N; i++)
        cin >> arr[i];
    
    sort(arr, arr+N);

    int max_val = 0;
    for (int h=1; h<=N; h++) {
        int cnt = 0;
        int index = 0;
        for (int i=0; i<N; i++) {
            if (arr[i] < h) index = i;
            else cnt++;
        }
        for (int i=0; i<L; i++) {
            if (arr[index]+1 >= h) {
                cnt++;
            }
            index--;
            if (index < 0) break;
        }

        if (cnt >= h) {
            max_val = h;
        }
    }

    cout << max_val;

    return 0;
}



// 4 1
// 1   100   2   3

// 1   2   3   100

// 2   2   3   100

// 1   3   3   100

// 1   2   4   100





// 1   2   3   4   5

//     3    4    4
// 서로 다른 2개