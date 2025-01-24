#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x[10], y[10];

    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> x[i] >> y[i];

    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {

                int arr[101] = {};
                for (int l=0; l<n; l++) {
                    if (l == i || l == j || l == k) continue;
                    for (int m=x[l]; m<=y[l]; m++) {
                        arr[m]++;
                    }
                }

                bool check = true;
                for (int l=0; l<=100; l++) {
                    if (arr[l] == 0 || arr[l] == 1) continue;
                    check = false;
                    break;
                }
                
                if (check) cnt++;
            }
        }
    }
    cout << cnt;
    
    return 0;
}