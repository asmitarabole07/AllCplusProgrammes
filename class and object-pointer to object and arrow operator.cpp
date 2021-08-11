#include <iostream>

using namespace std;

class base{
int n1,n2;
public:
    base(int a,int b)
    {
        n1=a;
        n2=b;
    }
    void getdata()
    {
        cout<<"Value of a is "<<n1<<endl;
        cout<<"Value of b is "<<n2<<endl;
    }
};


int main()
{
    base b1(4,5);
    base *p=&b1;
    p->getdata();      // is equivalent to     (*p).getdata();

    /*int a;
    //int* p=&a;
    int* p= new int(20);
    delete p;

    cout<<"value of a is "<<*p;*/
    return 0;
}
