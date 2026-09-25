#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    inline void input(int a, int b);
    inline void show();
};

inline void Point::input(int a, int b)
{
    x = a;
    y = b;
}

inline void Point::show()
{
    cout << "x: " << x << " y: " << y << endl;
}

int main()
{
    Point p1;

    p1.input(10, 20);
    p1.show();

    return 0;
}