#include <iostream>
#include <algorithm>
using namespace std;

int N, C, G, H;

int workload(int Ta, int Tb, int t) {
    if (t < Ta) return C;
    else if (Ta <= t && t <= Tb) return G;
    else return H; 
}

int main() {
    // Please write your code here.
    int arrTa[1000], arrTb[1000];

    cin >> N >> C >> G >> H;
    for (int i=0; i<N; i++) 
        cin >> arrTa[i] >> arrTb[i];
    
    int max_val = 0;
    for (int t=0; t<=1000; t++) {
        int sum_val = 0;
        for (int i=0; i<N; i++) 
            sum_val += workload(arrTa[i], arrTb[i], t);
        max_val = max(max_val, sum_val);
    }
    cout << max_val;

    return 0;
}