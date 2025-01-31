#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        scanf("%1d", &arr[i]);

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
 
    int min_val = 1<<30;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i] == 1 && arr[j] == 1) {
                min_val = min(min_val, j-i);
                break;
            }
        }
    }

    cout << min_val;

    return 0;
}