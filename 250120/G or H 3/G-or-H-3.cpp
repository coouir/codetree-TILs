#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10001]={};
    int S = 1 << 30;
    int L = -(1 << 30);

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        int x; char c;
        cin >> x >> c;

        if (c == 'G') arr[x] = 1;
        else arr[x] = 2;
        
        S = min(S, x);
        L = max(L, x);
    }
    cout << S << ' ' << L << endl;

    int max_val = 0;
    for (int i=S; i<L-K+1; i++) {
        int sum_val = 0;

        for (int j=i; j<=i+K; j++) {
            sum_val += arr[j];
        }
        
        max_val = max(max_val, sum_val);
    }
    cout << max_val;

    return 0;
}