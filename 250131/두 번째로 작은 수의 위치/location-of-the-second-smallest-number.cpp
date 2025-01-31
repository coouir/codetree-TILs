#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];

    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    // 최솟값
    int min_val = 100;
    for (int i=0; i<n; i++) 
        min_val = min(min_val, arr[i]);
    
    // 두 번째로 작은 수
    int min_val_2 = 100;
    for (int i=0; i<n; i++) {
        if (min_val < arr[i]) min_val_2 = min(min_val_2, arr[i]);
    }

    if (min_val_2 == 100) {
        cout << -1;
        return 0;
    } 

    int index = 0;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] == min_val_2) {
            index = i;
            cnt++;
        }
    }

    if (cnt != 1) {
        cout << -1;
        return 0;
    }

    cout << index+1;
    
    return 0;
}