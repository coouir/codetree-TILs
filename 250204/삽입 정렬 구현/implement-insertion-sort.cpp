#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    for (int i=1; i<n; i++) {
        int j = i-1;
        int key = arr[i];

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for (int i=0; i<n; i++)
        cout << arr[i] << ' ';

    return 0;
}