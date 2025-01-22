#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arrA[100];
    int arrB[100];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arrA[i] >> arrB[i];
    
    int max_val = 0;
    for (int i=0; i<N; i++) {
        int arrS[1001]={};
        for (int j=0; j<N; j++) {
            if (i == j) continue;

            for (int k=arrA[j]; k<arrB[j]; k++) {
                arrS[k] = 1;
            }
        }

        int cnt = 0;
        for (int k=1; k<=1000; k++) {
            if(arrS[k] == 1) cnt++;
        }
        
        max_val = max(max_val, cnt);
    }
    cout << max_val;

    return 0;
}