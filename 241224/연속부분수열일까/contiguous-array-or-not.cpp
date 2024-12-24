#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2, arr1[100], arr2[100];
    cin >> n1 >> n2;
    for (int i=0; i<n1; i++) {
        cin >> arr1[i];
    }
    for (int i=0; i<n2; i++) {
        cin >> arr2[i];
    }

    bool check1 = false;
    for (int i=0; i<=n1-n2; i++) {
        bool check2 = true;
        for (int j=0; j<n2; j++) {
            if (arr1[i+j] != arr2[j]) {
                check2 = false;
                break;
            }
        }
        check1 = check2;
    }

    if (check1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

// n1: 4
// n2: 2
//  0 1 2 3
//  0 1 -> 2까지

// n1: 10
// n2: 6
// 0 1 2 3 4 5 6 7 8 9
// 0 1 2 3 4 5 6 -> 4까지
