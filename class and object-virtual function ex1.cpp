#include <iostream>

using namespace std;

class india{
protected:
    int code;
public:
    india(int a)
    {
        code=a;
    }

    virtual void display()
    {
        cout<<"Error"<<endl;
    }
};

class rural:public india{
protected:
    int pop;
    float literacy;
public:
    rural(int a,int b,float c):india(a)
    {
        pop=b;
        literacy=c;
    }

    void display()
    {
        cout<<"RURAL"<<endl;
        cout<<"Country code of india is : "<<code<<endl;
        cout<<"population is : "<<pop<<endl;
        cout<<"Literacy is : "<<literacy<<endl;
    }


};
class urban:public india{
protected:
    int pop;
    float literacy;
public:
    urban(int a,int b,float c): india(a)
    {
        pop=b;
        literacy=c;
    }

    void display()
    {
        cout<<"URBAN"<<endl;
        cout<<"Country code of india is : "<<code<<endl;
        cout<<"population is : "<<pop<<endl;
        cout<<"Literacy is : "<<literacy<<endl;
    }


};



int main()
{
    india i(91);
    urban u(91,100,89.67);
    india* pointer=&u;
    pointer->display();

    return 0;
}
