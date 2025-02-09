#include <iostream>
using namespace std;

int merged_sort[100000];
int arr[100000];

void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid+1, k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            merged_sort[k] = arr[i];
            k += 1; i += 1;
        } else {
            merged_sort[k] = arr[j];
            k += 1; j += 1;
        }
    }
    
    while (i <= mid) {
        merged_sort[k] = arr[i];
        k += 1; i += 1;
    }

    while (j <= high) {
        merged_sort[k] = arr[j];
        k += 1; j += 1;
    }

    for (k = low; k<=high; k++) {
        arr[k] = merged_sort[k];
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n-1);
    for (int i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}