#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[101]={};

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        int c, x;
        cin >> c >> x;
        arr[x] += c;
    }

    int max_val = 0;
    for (int i=0; i<101; i++) {
        int sum_val = 0;
        for (int j=i; j<=i+2*K; j++) {
            if (j > 100) break;
            sum_val += arr[j];
        }
        max_val = max(max_val, sum_val);
    }
    cout << max_val;
    
    return 0;
}
