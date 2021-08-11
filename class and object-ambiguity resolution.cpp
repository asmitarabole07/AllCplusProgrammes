#include <iostream>

using namespace std;

class base1{
public:
    void fun()
    {
       cout<<"Hi Asmit"<<endl;
    }
};

class base2{
public:
    void fun()
    {
        cout<<"Hi Arabole"<<endl;
    }
};

class derived : public base1,public base2{
public:
    void fun1()
    {
        cout<<"We are looking ambiguity resolution"<<endl;
    }
    fun()
    {
        base2::fun();           //this step to be done to resolve ambiguity
                                //and need to specify function to be called out from which base
    }


};



int main()
{
    derived d;
    d.fun1();
    d.fun();
    return 0;
}
