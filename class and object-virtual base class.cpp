#include <iostream>

using namespace std;

class A{
public:                                          //    A
                                                 //   / \
                                                 //  B   c
                                                 //  \   /
                                                 //    D
  int a=10;
};

class B: virtual public A{              //virtual mentioned before defining base class
public:
    int b=20;
};

class C: virtual  public A{
public:
    int c=30;
};

class D:public B,public C{
public:
    //int a=B::a;  -->another option to resolve ambiguity
    int d=40;
    void display()
    {
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
        cout<<"Value of d is "<<d<<endl;

    }
};


int main()
{
    D d1;
        d1.display();
    return 0;
}
