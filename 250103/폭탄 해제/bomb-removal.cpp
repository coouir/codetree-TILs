#include <iostream>
#include <string>
using namespace std;

class CCS {
    public:
        string code; char color; int second;
        CCS (string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    // Please write your code here.
    string code; char color; int second;
    cin >> code >> color >> second;
    CCS ccs = CCS(code, color, second);

    cout << "code : " << ccs.code << endl;
    cout << "color : " << ccs.color << endl;
    cout << "second : " << ccs.second;
    return 0;
}