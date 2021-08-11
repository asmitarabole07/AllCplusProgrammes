#include <iostream>

using namespace std;

void fun(int a)
{
    cout<<"This is 'default' datatype with value "<<a<<endl;
}

template<class T>
void fun(T a)
{
    printf("This is 'template' datatype with value %c",a);
}
int main()
{
    fun(7);

    return 0;
}
