#include <iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
    char array[]={'d','d','h','f','j','t','b','a','w'};
    sort(array,array+8);


    for(int i=0;i<9;i++)
    {

        cout<<array[i]<<" ";
    }

    return 0;
}
