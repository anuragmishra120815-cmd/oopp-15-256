#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name, branch;
    int roll;
void input(){
   cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch; 
        cout<< endl;
        cout<<"-------------------------" << endl;
}

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
        cout<< endl;
        cout<< "-------------------------" << endl;
    }
};

int main()
{
    student s1;
    student s2;
    s1.input();
    s2.input();
    s1.show();
    s2.show();
    return 0;
}