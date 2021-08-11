#include <iostream>

using namespace std;

class shop{
string name;
float price;
public:
    void setdata()
    {
        cout<<"Enter item name : ";
        cin>>name;
        cout<<"Enter price of "<<name<<" : ";
        cin>>price;
    }

    void getdata()
    {
        cout<<"\nPrice of "<<name<<" is "<<price<<endl;
    }

};

int main()
{
    //shop s[3];
    shop *ptr=new shop[3];
    shop *temp=ptr;

    for (int i=0;i<3;i++)
    {
        ptr->setdata();
         ptr++;
    }
     for (int i=0;i<3;i++)
    {
        temp->getdata();
        temp++;
    }

    return 0;
}
