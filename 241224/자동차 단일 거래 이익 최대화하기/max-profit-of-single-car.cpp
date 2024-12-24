#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[1000], pro=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n-1; i++) {
        int max_val = arr[i+1];
        for (int j=1; j<n-1-i; j++) {
            if (max_val < arr[1+i+j]) max_val = arr[1+i+j];
        }
        if (max_val-arr[i] > pro) pro = max_val-arr[i];
    }
    cout << pro;
    return 0;
}