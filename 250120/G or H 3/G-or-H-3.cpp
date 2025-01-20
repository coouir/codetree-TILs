#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10001]={};

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        int x; char c;
        cin >> x >> c;

        if (c == 'G') arr[x] = 1;
        else arr[x] = 2;
    }

    int max_val = 0;
    for (int i=1; i<10000-K+1; i++) {
        int sum_val = 0;

        for (int j=i; j<=i+K; j++) {
            sum_val += arr[j];
        }
        
        max_val = max(max_val, sum_val);
    }
    cout << max_val;

    return 0;
}