#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100000];
    
    int n;
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    for (int i=5; i>=0; i--) {
        vector<int> arr_new[10];
        for (int j=0; j<n; j++) {
            int t = 5-i;

            int num = arr[j];
            for (int k=0; k<t; k++) {
                num /= 10;
            }
            arr_new[num%10].push_back(arr[j]);
        }

        int index = 0;
        for (int j=0; j<10; j++) {
            for (int k=0; k<arr_new[j].size(); k++) {
                arr[index++] = arr_new[j][k];
            }
        }
    }

    for (int i=0; i<n; i++) 
        cout << arr[i] << ' ';

    return 0;
}