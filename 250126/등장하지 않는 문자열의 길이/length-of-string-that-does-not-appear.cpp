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

        string arr[1000];
        int index = 0;
        for (int j=0; j<n-i; j++) { // 시작점
            string com = "";
            for (int k=j; k<=j+i; k++) 
                com += str[k];

            arr[index++] = com;
            for (int k=0; k<index-1; k++) {
                if (com == arr[k]) {
                    check = false;
                    break;
                }
            }
            if (check == false) break;
        }
        if (check) {
            cout << i+1;
            break;
        }
    }

    return 0;
}
