#include <iostream>

using namespace std;

class base{
int a;
public:
    void setdata(int a)
    {
        this->a=a;           //this is a keyword which is a pointer which points to the object which invokes the member function
    }
    void getdata()
    {
        cout<<"The value of a is : "<<a;
    }
};

int main()
{
    base b;
    b.setdata(4);
    b.getdata();
    return 0;
}
