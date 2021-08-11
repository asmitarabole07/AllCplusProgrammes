#include <iostream>

using namespace std;

class base1{
    int n1;
public:
    base1(int a)
    {
        n1=a;
        cout<<"constructor base 1 called"<<endl;
    }
    void print1()
    {
        cout<<"Value of n1 is "<<n1<<endl;
    }

};

class base2{
    int n2;
public:
    base2(int a)
    {
        n2=a;
        cout<<"constructor base 2 called"<<endl;
    }
    void print2()
    {
        cout<<"Value of n2 is "<<n2<<endl;
    }

};

class derived:public base2,public base1{
int n3,n4;
public:
    derived(int a,int b,int c,int d):base1(a),base2(b)
    {
    n3=c;
    n4=d;
    cout<<"constructor derived called"<<endl;
    }

    void print()
    {
        print1();
        print2();
        cout<<"Value of n3 is "<<n3<<endl;
        cout<<"Value of n4 is "<<n4<<endl;
    }


};

int main()
{
    derived d1(1,2,3,4);
    d1.print();
    return 0;
}
