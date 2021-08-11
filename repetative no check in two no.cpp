#include <iostream>

using namespace std;

class value{
int a,b;
public:
    int p1,p2,q1,q2;
    void set()
    {
        cout<<"Enter first value : ";
        cin>>a;
        cout<<"Enter second value : ";
        cin>>b;

    }
    void check()
    {
        p2=a%10;
        p1=(a/10)%10;
        q2=b%10;
        q1=(b/10)%10;
    }
    void display()
    {
        check();
        if(p1==q1 || p1==q2 || p2==q1 || p2==q2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

};

int main()
{
    value v;
    v.set();
    v.display();
    return 0;
}
