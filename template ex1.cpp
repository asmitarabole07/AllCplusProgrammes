#include <iostream>

using namespace std;
template<class T,class T1>

class weight{
    T kg;
    T1 gram;
public:
    weight(T a,T1 b)
    {
        kg=a;
        gram=b;
    }
    T out()
    {
        cout<<"Value Kg is : "<<kg<<endl;
        cout<<"Value gram is : "<<gram<<endl;
    }
};
int main()
{
    weight<int,float> w(5,4.43);
    w.out();

    weight<float,float> w1(5.78,3.23);
    w1.out();


    return 0;
}
