#include <iostream>

using namespace std;

class data{
    int a;
public:
    data()
    {
        a=0;
    }
    data(int p)
    {
        a=p;
    }

    data(data &obj)     //copy constructor
    {
        a=obj.a;
    }

    print(void)
    {
       cout<<"value of a is "<<a<<endl;
    }
};

int main()
{
    data x(4);
    x.print();

    data y=x;
    y.print();

    data z(x);
    z.print();

    return 0;
}
