#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x[20]={}, y[20]={};

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> x[i] >> y[i];
    
    // Case 1, 2) -, -, -   |, |, |
    for (int i=0; i<=10; i++) {
        for (int j=i+1; j<=10; j++) {
            for (int k=j+1; k<=10; k++) {
                int cnt1 = 0;
                int cnt2 = 0;
                for (int l=0; l<N; l++) {
                    if (y[l] == i || y[l] == j || y[l] == k) cnt1++;
                    if (x[l] == i || x[l] == j || x[l] == k) cnt2++;
                }
                if (cnt1 == N || cnt2 == N) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    // Case 3, 4) -, |, |   |, -, -
    for (int i=0; i<=10; i++) {
        for (int j=0; j<=10; j++) {
            for (int k=j+1; k<=10; k++) {
                int cnt1 = 0;
                int cnt2 = 0;
                for (int l=0; l<N; l++) {
                    if (y[l] == i || x[l] == j || x[l] == k) cnt1++; 
                    if (x[l] == i || y[l] == j || y[l] == k) {
                        cnt2++;
                    }
                }
                if (cnt1 == N || cnt2 == N) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;

    return 0;
}
