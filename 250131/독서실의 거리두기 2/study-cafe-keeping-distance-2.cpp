#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1000];
    int max_val = 1<<30;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        scanf("%1d", &arr[i]);

    // Case 1)
    int max_i = 0;
    int max_j = 0;
    int max_d = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i] == 1 && arr[j] == 1) {
                if (max_d < j-i) {
                    max_i = i;
                    max_j = j;
                    max_d = j-i;
                } 
                break;
            }
        }
    }

    arr[(max_i + max_j)/2] = 1;

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i] == 1 && arr[j] == 1) {
                max_val = min(max_val, j-i);
                break;
            }
        }
    }

    arr[(max_i + max_j)/2] = 0;

    // Case 2)
    int min_val2 = 1<<30;
    if (arr[0] == 0) {
        arr[0] = 1;
        for (int i=0; i<N; i++) {
            for (int j=i+1; j<N; j++) {
                if (arr[i] == 1 && arr[j] == 1) {
                    min_val2 = min(min_val2, j-i);
                    break;
                }
            }
        }
        arr[0] = 0;
    } 

    // Case 3)
    int min_val3 = 1<<30;
    if (arr[N-1] == 0) {
        arr[N-1] = 1;
        for (int i=0; i<N; i++) {
            for (int j=i+1; j<N; j++) {
                if (arr[i] == 1 && arr[j] == 1) {
                    min_val3 = min(min_val3, j-i);
                    break;
                }
            }
        }
        arr[N-1] = 0;
    }
    if (min_val2 == 1<<30) min_val2 = 0;
    if (min_val3 == 1<<30) min_val3 = 0;
    max_val = max(max_val, max(min_val2, min_val3));

    cout << max_val;

    return 0;
}