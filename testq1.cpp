#include<bits/stdc++.h>
using namespace std;
class currency
{
    int rupees, paisa;
    public:
    currency(float amount)
    {
        rupees = (int)amount;
        paisa = (amount - rupees) * 100;
    }
    void show()
    {
        cout << "Rupees: " << rupees << ", Paisa: " << paisa << endl;
    }   
};
int main()
{
    float amount;
    cout << "Enter amount in decimal format (e.g., 123.45): ";
    cin >> amount;

    currency c(amount);
    c.show();

    return 0;
}