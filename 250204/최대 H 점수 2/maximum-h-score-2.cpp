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
    // for (int i=0; i<N; i++) {
    //     cout << arr[i] << ' ';
    // }

    //cout << '\n';

    int max_val = 0;
    for (int h=1; h<=100; h++) {
        int cnt = 0;
        int index = 0;
        for (int i=0; i<N; i++) {
            if (arr[i] < h) index = i;
            else cnt++;
        }
        //cout << cnt << ' ' << h << endl;

        int time = L;
        while(time) {
            if (arr[index]+1 >= h) {
                cnt++;
                time--;
            } else {
                break;
            }
        }
        //cout << cnt << endl;

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