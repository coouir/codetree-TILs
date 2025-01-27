#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10], b[10];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> a[i] >> b[i];
    

    for (int i=a[0]; i<=b[0]; i++) {
        int val = i;
        
        int check = true;
        for (int j=1; j<n; j++) {
            val *= 2;
            if (!(a[j] <= val && val <= b[j])) {
                check = false;
                break;
            }
        }
        if (check && (i%2 == 0)) {
            cout << i/2;
            break;
        }
    }
    return 0;
}