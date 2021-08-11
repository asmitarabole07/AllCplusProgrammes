#include <iostream>
using namespace std;

class complex{
int a;
int b;
public:
    void getdata()
    {
        cout<<"Enter a and b : ";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"complex no is : ";
        cout<<a<<" + "<<b<<"i"<<endl;
    }

    void sum(complex c1,complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c1.display();

    c2.getdata();
    c2.display();

    c3.sum(c1,c2);
    cout<<"Complex sum is "<<endl;
    c3.display();

    return 0;
}
