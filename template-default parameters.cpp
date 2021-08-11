#include <iostream>

using namespace std;
template<class T1=int,class T2=float,class T3=string>     //default datatypes

class value{
    T1 a;
    T2 b;
    T3 c;
public:
    value(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
        cout<<"Value of c is : "<<c<<endl;

    }

};

int main()
{
    value<>v1(4,3.43,"asmit");
    v1.display();

    cout<<endl;

    //value<string,float,int>v2("Asmit",91.45,7);
    //v2.display();

    return 0;
}
