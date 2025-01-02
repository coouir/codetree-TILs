#include <iostream>
using namespace std;

class Spy {
    public:
        string code; char loc; int time;

        Spy(string code, char loc, int time) {
            this->code = code;
            this->loc = loc;
            this->time = time;
        }
};

int main() {
    // Please write your code here.
    string code; char loc; int time;
    cin >> code >> loc >> time;
    Spy spy = Spy(code, loc, time);
    cout << "secret code : " << spy.code << endl;
    cout << "meeting point : " << spy.loc << endl;
    cout << "time : " << spy.time << endl;
    return 0;
}