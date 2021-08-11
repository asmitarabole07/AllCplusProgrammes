#include <iostream>

using namespace std;

class shop{

    string name[5];
    int cost[5];

    public:
        void input(void);
        void output(void);

};

void shop:: input(void)
{
    for(int i=0;i<5;i++)
    {
        cout<<"Enter name of item : "<<i+1<<endl;
        cin>>name[i];
        cout<<"Enter price of "<<name[i]<<endl;
        cin>>cost[i];
        cout<<endl;
    }
}

void shop::output(void)
{
    for(int i=0;i<5;i++)
    {
        cout<<"cost of "<<name[i]<<" is "<<cost[i]<<endl;
    }
}

int main()
{
    shop s1;
    s1.input();
    s1.output();
    return 0;
}
