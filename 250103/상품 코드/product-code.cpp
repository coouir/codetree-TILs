#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string name; int code;
        Product (string name, int code) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    // Please write your code here.
    string name; int code;
    cin >> name >> code;

    Product product1 = Product("codetree", 50);
    Product product2 = Product(name, code);

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name;
    return 0;
}