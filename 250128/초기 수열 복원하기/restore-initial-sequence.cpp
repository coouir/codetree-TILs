#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1000];

    int N;
    cin >> N;
    for (int i=0; i<N-1; i++)
        cin >> arr[i];

    for (int i=1; i<N; i++) {
        for (int j=1; j<N; j++) {
            if (i+j != arr[0]) continue;

            int test[1000] = {i, j};
            int cnt[1001] = {};
            cnt[i]++;
            cnt[j]++;

            int n = j;
            for (int k=1; k<N-1; k++) {
                n = arr[k]-n;
                test[k+1] = n;
                cnt[n]++;
            }

            bool check = true;
            for (int k=1; k<=N; k++) {
                if (!(cnt[k] == 0 || cnt[k] == 1)) {
                    check = false;
                    break;
                }
                if (test[k-1] == 0) {
                    check = false;
                    break;
                }
            }
            if (check) {
                for (int k=0; k<N; k++) {
                    cout << test[k] << ' ';
                }
                return 0;
            }
        }
    }
    return 0;
}


// 4    6   7   6
// 1+3  3+3 3+4 4+2
// 2+2  2+2 2+5 5+1
// 3+1  1+5 5+2 2+4
