#include <iostream>
using namespace std;

#define X 1000
#define ARR 200001
#define OFF 100000

int main() {
    // Please write your code here.
    int n, x1[X], x2[X], D[X], p=0;
    int arr[ARR]={}, arrB[ARR]={}, arrW[ARR]={};
    cin >> n;
    for (int i=0; i<n; i++) {
        int x; char c;
        cin >> x >> c;
        if (c == 'L') {
            x1[i] = p-x+1 + OFF;
            x2[i] = p + OFF;
            D[i] = 1;
            p = p-x+1;
        } else {
            x1[i] = p + OFF;
            x2[i] = p+x-1 + OFF;
            D[i] = 0;
            p = p+x-1;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=x1[i]; j<=x2[i]; j++) { // 흰색 3, 검은색 2, 회색 1
            if (D[i] == 1) { // 왼쪽으로 이동 (흰색)
                if (arr[j] != 1) arr[j] = 3;
                arrW[j]++;

            } else { // 오른쪽으로 이동 (검은색)
                if (arr[j] != 1) arr[j] = 2;
                arrB[j]++;
            }

            if (arrB[j] >= 2 &&  arrW[j] >= 2) {
                arr[j] = 1;
            }
        }
    }
    int W=0, B=0, G=0;
    for (int i=0; i<ARR; i++) {
        if (arr[i] == 3) W++;
        else if (arr[i] == 2) B++;
        else if (arr[i] == 1) G++;
    }
    cout << W << ' ' << B << ' ' << G;
    return 0;
}