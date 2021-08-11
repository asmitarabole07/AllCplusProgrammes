#include <iostream>

using namespace std;

class employee{
        int id;
        int salary;
        friend void trial(employee e1);         //Friend function defination


    public:
        void input (int n1,int n2 )
        {
            id=n1;
            salary=n2;
        }
        void output(void)
        {
            cout<<"salary of "<<id<<" is "<<salary<<endl;
        }


};

class data{
    int base;
    friend
    friend int employee::

    public:
        void out(int n)
        {
            base=n;
        }
};

void trial(employee e1)
{
    cout<<"trial value salary is "<<e1.salary;
}

int main()
{
    employee e1;
    e1.input(1,200);
    e1.output();
    trial(e1);

    return 0;
}
