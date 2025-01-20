#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char arr[101]={}; 
    int S = 100;
    int L = 0;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int x; char c;
        cin >> x >> c;
        arr[x] = c;

        S = min(S, x);
        L = max(L, x);
    }

    int max_val = 0;
    for (int i=S; i<=L; i++) {
        for (int j=i+1; j<=L; j++) {
            if (!((arr[i] == 'G' || arr[i] == 'H') && (arr[j] == 'G' || arr[j] == 'H'))) continue;

            int cntG = 0;
            int cntH = 0;
            for (int k=i; k<=j; k++) {
                if (arr[k] == 'G') cntG++;
                else if (arr[k] == 'H') cntH++;
            }
            if ((cntG != 0 && cntH == 0) || (cntG == 0 && cntH != 0) || (cntG == cntH)) {
                max_val = max(max_val, j-i);
            }
        }
    }
    cout << max_val;

    return 0;
}