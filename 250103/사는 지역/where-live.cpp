#include <iostream>
#include <string>
# include <cstring>
using namespace std;

class Info {
    public:
        string name, add, loc;
        Info (string name="", string add="", string loc="") {
            this->name = name;
            this->add = add;
            this->loc = loc;
        } 
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Info info[10];
    for (int i=0; i<n; i++) {
        string name, add, loc;
        cin >> name >> add >> loc;
        info[i] = Info(name, add, loc);
    }

    int max_idx = 0;
    for (int i=1; i<n; i++) {
        if (info[max_idx].name < info[i].name) {
            max_idx = i;
        }
    }
    cout << "name " << info[max_idx].name << endl;
    cout << "addr " << info[max_idx].add << endl;
    cout << "city " << info[max_idx].loc; 
    return 0; 
}