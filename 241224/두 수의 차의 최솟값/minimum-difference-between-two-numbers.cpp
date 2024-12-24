#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int D = 100;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (D > arr[j]-arr[i]) D = arr[j]-arr[i];
        }
    }
    cout << D;
    return 0;
}