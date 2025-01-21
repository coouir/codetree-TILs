#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int arr[6];
    int sum_a = 0;
    
    for (int i=0; i<6; i++) {
        cin >> arr[i];
        sum_a += arr[i];
    }

    int min_a = 1 << 30;
    for (int i=0; i<6; i++) {
        for (int j=i+1; j<6; j++) {
            for (int k=j+1; k<6; k++) {
                min_a = min(min_a, abs(arr[i] + arr[j] + arr[k] - (sum_a - (arr[i] + arr[j] + arr[k]))));
            }
        }
    } 
    cout << min_a;
    
    return 0;
}