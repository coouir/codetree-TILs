#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100000];

    int n;
    cin >> n;
    for (int i=0; i<n; i++)
      cin >> arr[i];
    
    int max_val = 0;
    for (int i=0; i<n; i++) {
      for (int j=i+1; j<n; j++) {
        int check = true;
        for (int k=0; k<n; k++) {
          for (int l=k+1; l<n; l++) {
            if (i == k || i == l || j == k || j == l) continue;
            if (abs(arr[i]-arr[j]) > abs(arr[k]-arr[l])) {
              check = false;
              break;
            }
          }
        }
        if (check) {
          max_val = abs(arr[i]-arr[j]);
        }
      }
    }
    cout << max_val; 
    return 0;
}

// 2

// 2n
// 15   2   7   9   10   5

// 2   5   7   9   10   15

// 2, 5 = 3


// 2, 7 = 5
// 2, 9
// 2, 10 = 8
// 5, 7, 9, 15


// 2, 15
