#include <iostream>
#include<cmath>

using namespace std;


class simple{
    protected:
        int n1,n2;
    public:
        void getdata()
        {
            cout<<"Enter number 1 : ";
            cin>>n1;
            cout<<"\nEnter number 2 : ";
            cin>>n2;
        }

        void display1()
        {
            cout<<"\nSimple calculations are\n";
            cout<<"+ is : "<<n1+n2<<endl;
            cout<<"- is : "<<n1-n2<<endl;
            cout<<"* is : "<<n1*n2<<endl;
            cout<<"/ is : "<<n1/n2<<endl;
        }

};

class scientific: public simple{
public:
    void display2()
        {
            cout<<"\nScientific calculations are\n";
            cout<<"sin("<<n1<<") is : "<<sin(n1)<<endl;
            cout<<"cos("<<n2<<") is : "<<cos(n2)<<endl;
            cout<<"tan("<<n1<<") is : "<<tan(n1)<<endl;
            cout<<"max is : "<<fmax(n1,n2)<<endl;
        }
};

class hybrid: public scientific{
public:
    void display()
    {
        display1();
        display2();
    }

};



int main()
{
    hybrid h1;
    h1.getdata();
    h1.display();
    return 0;
}
