#include <iostream>
#include <string>
using namespace std;

string str1, str2;

int F(string str1, string str2) {
    int result = -1;
    for (int i=0; i<str1.length()+1; i++) {
        int check = i;
        for (int j=0; j<str2.length(); j++) {
            if (str1[i+j] != str2[j]) {
                check = -1;
                break;
            }
        }
        if (check != -1) {
            result = check;
            break;
        }
    }
    return result;
}

int main() {
    // Please write your code here.
    cin >> str1 >> str2;

    cout << F(str1, str2);
    return 0;
}