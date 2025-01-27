#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];

    for (int i=1; i<=3; i++) 
        for (int j=1; j<=3; j++) 
            scanf("%1d", &arr[i][j]);
    
    int cnt = 0;
    for (int i=1; i<=9; i++) {
        for (int j=i+1; j<=9; j++) {
            bool ch = false;
            // Case 1, 2) |, |, |    -, -, -
            for (int k=1; k<=3; k++) {
                int cnt1 = 0;
                if (arr[1][k] == i || arr[1][k] == j) cnt1++;
                if (arr[2][k] == i || arr[2][k] == j) cnt1++;
                if (arr[3][k] == i || arr[3][k] == j) cnt1++;

                int cnt2 = 0;
                if (arr[k][1] == i || arr[k][1] == j) cnt2++;
                if (arr[k][2] == i || arr[k][2] == j) cnt2++;
                if (arr[k][3] == i || arr[k][3] == j) cnt2++;
                
                if ((cnt1 == 3 && !(arr[1][k] == arr[2][k] && arr[2][k] == arr[3][k])) 
                    || (cnt2 == 3 && !(arr[k][1] == arr[k][2] && arr[k][2] == arr[k][3]))) {
                    ch = true;
                    break;
                }
            }

            // Case 3, 4) 
            int cnt3 = 0;
            if (arr[1][1] == i || arr[1][1] == j) cnt3++;
            if (arr[2][2] == i || arr[2][2] == j) cnt3++;
            if (arr[3][3] == i || arr[3][3] == j) cnt3++;

            int cnt4 = 0;
            if (arr[1][3] == i || arr[1][3] == j) cnt4++;
            if (arr[2][2] == i || arr[2][2] == j) cnt4++;
            if (arr[3][1] == i || arr[3][1] == j) cnt4++;

            if ((cnt3 == 3 && !(arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3])) 
                || (cnt4 == 3 && !(arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1]))) {
                ch = true;
            } 

            if (ch) {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}