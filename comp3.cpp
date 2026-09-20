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

    friend comp operator+(comp c1, comp c2);

    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

comp operator+(comp c1, comp c2)
{
    int r = c1.real + c2.real;
    int i = c1.img + c2.img;

    return comp(r, i);
}

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