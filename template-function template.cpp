#include <iostream>

using namespace std;

template<class T1,class T2>
void add(T1 a,T2 b)
{
    T2 c=a;
    cout<<"Addition is : "<<c<<endl;
}

int main()
{
    add('a','b');
    return 0;
}
