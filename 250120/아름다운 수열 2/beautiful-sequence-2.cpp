#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arrN[100], arrM[100];

    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) cin >> arrN[i];
    for (int i=0; i<M; i++) cin >> arrM[i];
    sort(arrM, arrM+M);

    int cnt = 0;
    for (int i=0; i<N-M+1; i++) {
        int arr[100];
        for (int j=i; j<i+M; j++) {
            arr[j-i] = arrN[j];
        }
        sort(arr, arr+M);

        bool check = true;
        for (int j=0; j<M; j++) {
            if (arrM[j] != arr[j]) {
                check = false;
                break;
            }
        }
        if (check) cnt++;
    }
    cout << cnt; 
    
    return 0;
}