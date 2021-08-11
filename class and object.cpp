#include <iostream>

using namespace std;

class data{
    int a,b,t;
    public:
       void getdata(void);
       void putdata(void);
};

void data :: getdata ()
{
    cout<<"Enter two numbers : ";
    cin>>a>>b;
}

void data :: putdata (void)
{
    cout<<"Sum is : "<<a+b;
}

int main()
{
    data p1;
    p1.getdata();
    p1.putdata();

    return 0;
}
