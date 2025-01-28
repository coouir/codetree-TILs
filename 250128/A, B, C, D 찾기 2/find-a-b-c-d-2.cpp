#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[15];
    
    for (int i=0; i<15; i++)
        cin >> arr[i];
    sort(arr, arr+15);

    for (int a=1; a<=40; a++) {
        for (int b=a; b<=40; b++) {
            for (int c=b; c<=40; c++) {
                for (int d=c; d<=40; d++) {
                    if (a+b+c+d != arr[14]) continue;
                    int test[15] = {a, b, c, d, a+b, b+c, c+d, d+a, a+c, b+d, a+b+c, a+b+d, a+c+d, b+c+d, a+b+c+d};
                    sort(test, test+15);

                    bool check = true;
                    for (int i=0; i<15; i++) {
                        if (arr[i] != test[i]) {
                            check = false;
                            break;
                        }
                    }
                    
                    if (check) {
                        cout << a << ' ' << b << ' ' << c << ' ' << d;
                        return 0;
                    }
                }
            }
        }
    }
    
    return 0;
}