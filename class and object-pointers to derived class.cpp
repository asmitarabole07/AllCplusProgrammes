#include <iostream>

using namespace std;

class baseclass{
public:
    int base;
    void display()
    {
        cout<<"Value of base is : "<<base<<endl;
    }
};

class derivedclass : public baseclass{
public:
    int derived;
    void display()
    {
        cout<<"Value of base is : "<<base<<endl;
        cout<<"Value of derived is : "<<derived<<endl;
    }
};

int main()
{
    /*baseclass b;
    baseclass *basepointer=&b;
    basepointer->base=10;
    basepointer->display();*/

    derivedclass d;
    derivedclass* derivedpointer=&d;
    derivedpointer->base=34;
    derivedpointer->derived=65;
    derivedpointer->display();


    return 0;
}
