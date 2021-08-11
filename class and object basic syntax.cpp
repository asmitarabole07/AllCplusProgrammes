#include <iostream>

using namespace std;

class student{
    private:
        int a,b,c;
    public:
        int d,e;
        void fun1(int x,int y,int z);
        void fun2(){
        cout<<"value of a is "<<a<<endl;
         cout<<"value of b is "<<b<<endl;
          cout<<"value of c is "<<c<<endl;
           cout<<"value of d is "<<d<<endl;
            cout<<"value of e is "<<e<<endl;

        }


};

void student::fun1(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}

int main()
{
    class student s1;
    s1.d=32;
    s1.e=45;


    s1.fun1(43,67,54);
    s1.fun2();

    return 0;
}
