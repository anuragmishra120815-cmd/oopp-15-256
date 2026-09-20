#include <iostream>
using namespace std;

class comp
{
    int real, img;

public:
    comp(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    comp operator+(comp c)
    {
        int r = this->real + c.real;
        int i = this->img + c.img;

        return comp(r, i);
    }

    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    comp c1(5, 20);
    comp c2(15, 9);
    comp c3;

    c3 = c1 + c2;

    cout << "C1 = ";
    c1.show();

    cout << "C2 = ";
    c2.show();

    cout << "C3 = ";
    c3.show();

    return 0;
}