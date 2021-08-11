#include <iostream>
#include <cmath>

using namespace std;
class p2;

class p1{
    int x1,y1;
    friend distance(p1,p2);
public:
    p1(int a,int b)
    {
        x1=a;
        y1=b;
    }

};

class p2{
    int x2,y2;
    friend distance(p1,p2);
public:
    p2(int a,int b)
    {
        x2=a;
        y2=b;
    }

};

int distance(p1 v1,p2 v2)
{
    int val=((v2.x2-v1.x1)*(v2.x2-v1.x1))+((v2.y2-v1.y1)*(v2.y2-v1.y1));
    int result = sqrt(val);
    cout<<"Distance between points is "<<result;
}



int main()
{
    p1 v1(1,0);
    p2 v2(70,0);

    distance(v1,v2);
    return 0;
}
