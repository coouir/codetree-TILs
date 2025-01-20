#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    int cnt = 0;
    for (int i=0; i<N; i++) {
        for (int j=i; j<N; j++) {
            int sum_val = 0;
            for (int k=i; k<=j; k++) 
                sum_val += arr[k];

            double avg = (double)sum_val / (j-i+1);
            for (int k=i; k<=j; k++) {
                if (arr[k] == avg) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}