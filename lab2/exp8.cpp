#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
}

void callByReference(int &x) {
    x = x + 10;
}

void callByAddress(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 10, b = 10, c = 10;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "Call by Value: " << a << endl;
    cout << "Call by Reference: " << b << endl;
    cout << "Call by Address: " << c << endl;

    return 0;
}