#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int arr[7];
    for (int i=0; i<7; i++)
        cin >> arr[i];

    sort(arr, arr+7);

    cout << arr[0] << ' ' << arr[1] << ' ' << arr[6]-arr[0]-arr[1];
    return 0;
}

//A <= B <=                   <= A+B+C