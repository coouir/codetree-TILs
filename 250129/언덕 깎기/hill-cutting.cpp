#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    int min_val = 1 << 30;
    for (int i=0; i<=83; i++) {
        int cost = 0;
        for (int j=0; j<N; j++) {
            if (i <= arr[j] && arr[j] <= i+17) continue;

            if (arr[j] < i) cost += (i-arr[j])*(i-arr[j]);
            else cost += (arr[j] - (i+17))*(arr[j] - (i+17));
        }
        min_val = min(min_val, cost);
    }
    cout << min_val;

    return 0;
}