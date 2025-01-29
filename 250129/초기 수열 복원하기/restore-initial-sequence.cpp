#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[1100];

    int N;
    cin >> N;
    for (int i=0; i<N-1; i++) 
        cin >> arr[i];
    
    for (int i=1; i<=N; i++) {
        int test[1100] = {i};
        int n = i;

        int check = true;
        for (int j=0; j<N-1; j++) {
            n = arr[j] - n;
            
            if (n <= 0) {
                check = false;
                break;
            }

            for (int k=0; k<=j; k++) {
                if (test[k] == n) {
                    check = false;
                    break;
                }
            }
            if (check == false) break; 
            test[j+1] = n;            
        }

        if (check == false) continue;

        for (int j=0; j<N; j++) {
            cout << test[j] << ' ';
        }
        return 0;
    }
    return 0;
}