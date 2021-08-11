#include <iostream>

using namespace std;
class v2;

class v1{
    int num1;
    friend add(v1,v2);
public:
    void input(int a)
    {
        num1=a;
    }

};

class v2{
    int num2;
    friend add(v1,v2);
public:
    void input(int b)
    {
        num2=b;
    }

};

int add(v1 val1,v2 val2)
{
    cout<<"Sum of "<<val1.num1<<" and "<<val2.num2<<" is "<<val1.num1+val2.num2;
}

int main()
{
    v1 val1;
    val1.input(10);
    v2 val2;
    val2.input(10);

    add(val1,val2);
    return 0;
}
