#include <iostream>
using namespace std;

int arr[100000];
int m_arr[100000];

void Merge(int low, int mid, int high) {
    int s = low;
    int e = mid+1;

    int k = low;
    
    while (s <= mid && e <= high) {
        if (arr[s] < arr[e]) {
            m_arr[k++] = arr[s++];
        } else {
            m_arr[k++] = arr[e++];
        }
    }

    while (s <= mid) {
        m_arr[k++] = arr[s++];
    }
    while (e <= high) {
        m_arr[k++] = arr[e++];
    }

    for (int i=0; i<=high; i++) {
        arr[i] = m_arr[i];
    }
}

void MergeSort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid+1, high);
        Merge(low, mid, high);
    }
} 



int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    MergeSort(0, n-1);

    for (int i=0; i<n; i++) cout << arr[i] << ' ';
    return 0;
}