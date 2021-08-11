#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int array[5],i,max;
    cout << "Enter Elements in array\n";

    for(i=0;i<5;i++)
    {
        cout<<"Element- " <<i+1<<endl;
        cin>>array[i];
    }

   max=array[0];

    for(i=0;i<5;i++)
    {
        max=fmax(max,array[i]);
    }

    cout<<"\nMaximum number is "<<max<<endl;

    int*j=std::max_element(array,array+4);
    cout<<"Max is "<<int(*j);






    return 0;
}
