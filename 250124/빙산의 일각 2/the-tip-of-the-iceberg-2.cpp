#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int max_h = 0;

    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> arr[i];
        max_h = max(max_h, arr[i]);
    }

    int max_val = 0;
    for (int i=1; i<max_h; i++) {
        int cnt = 0;

        bool check = false;
        for (int j=0; j<N; j++) {
            if (arr[j]-i > 0 && check == false) {
                check = true;
                cnt++;
            } 
            if (arr[j]-i <= 0) check = false;
        }
        max_val = max(max_val, cnt);
    }
    cout << max_val;

    return 0;
}