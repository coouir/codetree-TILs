#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int arr[20];

    int N;
    cin >> N;
    
    for (int i=0; i<N; i++)
        scanf("%1d", &arr[i]);

    int max_val = 0;
    for (int i=0; i<N; i++) {
        int dis = 1<<30;

        if (arr[i] == 1) continue;
        for (int j=0; j<N; j++) {
            if (i == j) continue;
            if (arr[j] == 0) continue;
            dis = min(dis, abs(j-i));
        }
        max_val = max(max_val, dis);
    }
    cout << max_val;

    return 0;
}