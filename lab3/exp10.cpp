#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    inline void input();
    inline void show();
};

inline void Point::input()
{
    cout << "Enter x and y: ";
    cin >> x >> y;
}

inline void Point::show()
{
    cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
    Point p1, p2;

    p1.input();
    p2.input();

    cout << "\nPoint 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}