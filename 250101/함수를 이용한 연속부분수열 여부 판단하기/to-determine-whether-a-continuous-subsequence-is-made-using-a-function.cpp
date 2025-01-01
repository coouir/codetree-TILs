#include <iostream>
using namespace std;

bool F(int arr1[], int arr2[], int p, int n2) {
    bool check = true;
    for (int i=0; i<n2; i++) {
        if (arr1[p+i] != arr2[i]) {
            check = false;
            break;
        }
    }
    return check;
}

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

    for (int i=0; i<n1-n2+1; i++) {
        if (F(arr1, arr2, i, n2)) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}