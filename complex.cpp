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

    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    comp c1(5, 20);
    comp c2;

    c1.show();
    c2.show();

    return 0;
}