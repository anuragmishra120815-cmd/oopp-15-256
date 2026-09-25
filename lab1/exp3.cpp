#include <iostream>
using namespace std;

class Point
{
    int a, b;

public:
    void input()
    {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    void show()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    Point p1, p2;

    cout << "Point 1:\n";
    p1.input();
    p1.show();

    cout << "\nPoint 2:\n";
    p2.input();
    p2.show();

    return 0;
}