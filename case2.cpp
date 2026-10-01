#include <iostream>
using namespace std;

class Parent {
public:
    int x;
    Parent() : x(0) { cout << "Parent x: " << x << endl; }
};

class Child : public Parent {
public:
    Child() : Parent() { cout << "Child called" << endl; }
};

int main() {
    Child obj;
    return 0;
}
