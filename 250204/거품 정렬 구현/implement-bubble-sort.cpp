#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    for (int i=0; i<n-1; i++) {
        bool check = true;
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                check = false;
            }
        }
        if (check) break;
    }

    for (int i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}