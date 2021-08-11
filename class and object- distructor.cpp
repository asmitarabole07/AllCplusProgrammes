#include <iostream>

using namespace std;
int count=0;

class trial{
    int a;
public:
    trial(void)
    {
        cout<<"constructor called"<<endl;
        count++;
    }
    ~trial()
    {
        cout<<"distructor called"<<endl;
        count--;
    }

};

int main()
{
    trial t1;
        {
        trial t2;
        }
     trial t3;
    return 0;
}
