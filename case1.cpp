#include<bits/stdc++.h>
using namespace std;
class ep{
    public:
    ep()
    {
        cout << "Default constructor called" << endl;
    }
};
class man : public ep{
    public:
    man()
    {
        cout << "Derived class constructor called" << endl;
    }
};      
class director : public man{
    public:
    director()
    {
        cout << "Director class constructor called" << endl;
    }
};              
int main()
{
    man m;
    return 0;
}