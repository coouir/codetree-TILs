#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    for (int i=0; i<n-1; i++) {
        int min = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    for (int i=0; i<n; i++)
        cout << arr[i] << ' ';
    return 0;
}