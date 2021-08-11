#include <iostream>

using namespace std;

class base{
    int data1;
    friend class derived;
public:
    int data2;
    void setdata(void)
    {
        data1=10;
        data2=10;
    }
    int getdata1()
    {
       return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class derived //: public base
{
    int data3;
public:

    void process()
    {
        data3=getdata1()*data2;
    }
    void display()
    {
        cout<<"Value of data-1 is "<<getdata1()<<endl;
        cout<<"Value of data-2 is "<<data2<<endl;
        cout<<"Value of data-3 is "<<data3<<endl;
    }
};


int main()

{

    derived d1;
    d1.setdata();
    d1.process();
    d1.display();

    return 0;
}
