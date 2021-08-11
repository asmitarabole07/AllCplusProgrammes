#include <iostream>

using namespace std;

class trial{
    int v1,v2,v3,v4;
public:
    trial(int a1)
    {
        cout<<"you can make point";
    }
    trial(int a1,int a2)
    {
        cout<<"You can make line";
    }
    trial(int a1,int a2,int a3)
    {
        cout<<"You can make tringle";
    }
    trial(int a1,int a2,int a3,int a4)
    {
        cout<<"You can make square and rectangle";
    }

};

int main()
{
    trial t1(1,2,3,4);
    return 0;
}
