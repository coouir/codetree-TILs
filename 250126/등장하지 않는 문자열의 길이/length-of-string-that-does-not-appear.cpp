#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int i=0; i<n; i++) { // 길이
        bool check = true;
        for (int j=0; j<n-i; j++) { // 시작점
            //printf("(%d, %d), ", i, j);

            string com = "";
            for (int k=j; k<=j+i; k++) 
                com += str[k];
            
            for (int k=0; k<j-i; k++) {
                string tar = "";
                for (int l=k; l<=k+i; l++) 
                    tar += str[l];
                //cout << tar << ' ';
                if (com == tar) {
                    check = false;
                    break;
                }
            }
            for (int k=j+i+1; k<n-i; k++) {
                string tar = "";
                for (int l=k; l<=k+i; l++)
                    tar += str[l];
                //cout << tar << ' ';
                if (com == tar) {
                    check = false;
                    break;
                }
            }
            if (check == false) break;
            // cout << check;
            // cout << endl;
        }
        if (check) {
            cout << i+1;
            break;
        }
    }

    return 0;
}