#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1[100], x2[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for (int i=1; i<=100; i++) {
        bool check = true;
        for (int j=0; j<n; j++) {
            if (!(x1[j] <= i && i <= x2[j])) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    
    return 0;
}