#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][2];

    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i][0] >> arr[i][1];
    
    int min_val = 1 << 30;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            min_val = min(min_val, (arr[i][0]-arr[j][0])*(arr[i][0]-arr[j][0]) + (arr[i][1]-arr[j][1])*(arr[i][1]-arr[j][1]));
        }
    }
    cout << min_val;
    
    return 0;
}