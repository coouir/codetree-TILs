#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100001] = {};

    int n, q;
    scanf("%d %d", &n, &q);
    for (int i=0; i<n; i++)  
        scanf("%d", &arr[i]);

    sort(arr, arr+n);

    map<int, int> mapper;
    for (int i=0; i<n; i++) {
        mapper[arr[i]] = i+1;
        arr[i] = mapper[arr[i]];
    }
    
    int arr2[100001] = {};
    for (int i=0; i<n; i++) {
        arr2[arr[i]] = 1;
    }
    
    int prefix[100001] = {};
    for (int i=1; i<=n; i++) {
        prefix[i] = arr2[i] + prefix[i-1];
    }

    for (int i=0; i<q; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        a = mapper[a];
        b = mapper[b];
        cout << prefix[b] - prefix[a-1] << '\n';
    }
    return 0;
}