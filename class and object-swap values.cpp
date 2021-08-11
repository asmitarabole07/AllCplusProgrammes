#include <iostream>
using namespace std;

class v2;

class v1{
    int value1;
    friend void swap(v1,v2);
public:
    int a;
    void input(void)
    {
        cout<<"Enter value a : ";
        cin>>a;
        value1=a;
    }
};

class v2{
    int value2;
    friend void swap(v1,v2);
public:
    int b;
    void input(void)
    {
        cout<<"Enter value b : ";
        cin>>b;
        value2=b;
    }
};

void swap(v1 n1,v2 n2)
{
    cout<<"a is "<<n1.value1<<" and b is "<<n2.value2<<endl;
    int temp=n1.value1;
    n1.value1=n2.value2;
    n2.value2=temp;
    cout<<"a is "<<n1.value1<<" and b is "<<n2.value2<<endl;
}

int main()
{
    v1 n1;
    n1.input();
    v2 n2;
    n2.input();


    swap(n1,n2);
    return 0;
}
