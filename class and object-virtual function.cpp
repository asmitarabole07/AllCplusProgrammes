#include <iostream>

using namespace std;

class baseclass{
protected:
int n1,n2;
public:
    void set(int a,int b)
    {
        n1=a;
        n2=b;
    }
    virtual int display()                   //we have used the “virtual” keyword with the “display” function of the base class to make is virtual function
                                            //so when the display function is called by using the base class pointer the display function of the derived class will run because the base class pointer is pointing to the derived class object.
    {
        cout<<"Addition is : "<<n1+n2<<endl;
    }


};

class derivedclass : public baseclass{
public:
    int display()
    {
        cout<<"Substraction is : "<<n1-n2<<endl;
    }


};



int main()
{
     baseclass b;
     derivedclass d;
     baseclass* dpointer=&b;
     dpointer->set(5,1);
     dpointer->display();

    return 0;
}
