#include <iostream>
using namespace std;

class Calculator
{
public:
    // Inline function
    inline int add(int a, int b)
    {
        return a + b;
    }

    // Default argument
    int multiply(int a, int b = 1)
    {
        return a * b;
    }

    // Function overloading
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Addition: " << c.add(10, 20) << endl;

    cout << "Multiplication: " << c.multiply(5, 4) << endl;

    cout << "Multiplication with default value: "
         << c.multiply(5) << endl;

    cout << "Addition of decimal values: "
         << c.add(10.5, 5.5) << endl;

    return 0;
}