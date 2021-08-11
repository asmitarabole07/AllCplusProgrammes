#include <iostream>

using namespace std;

class base{
    int a,b;
public:
    //base(int i, int j): a(i),b(j)
    //base(int i, int j): a(i),b(i+j)            Initialization list in constructors
    base(int i, int j): a(i),b(a+j)

    {
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main()
{
    base b(5,8);

    return 0;
}
