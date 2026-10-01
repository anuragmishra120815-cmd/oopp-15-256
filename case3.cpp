#include<bits/stdc++.h>
using namespace std;                        
class a{
    public:
    a(){
        cout << "Default constructor of class a called" << endl;
    }
};
class b : public a{
    public:
    b() : a(){
        cout << "Default constructor of class b called" << endl;
    }
};
int main()
{
    b obj;
    return 0;
}