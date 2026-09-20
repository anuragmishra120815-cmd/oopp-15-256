#include <iostream>
using namespace std;

int main() {
    float salary = 50000;
    float &newSalary = salary;

    newSalary = newSalary + (newSalary * 0.10);

    cout << "Salary = " << salary << endl;

    return 0;
}