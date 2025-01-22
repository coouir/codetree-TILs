#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1000];

    int N, B;
    cin >> N >> B;
    for (int i=0; i<N; i++) 
        cin >> arr[i];

    int max_val = 0;
    for (int i=0; i<N; i++) {

        int cnt = 0;
        int sumCost = 0;
        for (int j=0; j<N; j++) {
            if (i == j) sumCost += arr[j]/2;
            else sumCost += arr[j];

            if (sumCost > B) break;
            cnt++;
        }

        max_val = max(max_val, cnt);
    }
    cout << max_val;

    return 0;
}