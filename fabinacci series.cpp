#include <iostream>

using namespace std;




int main()
{
    int n3,i,result=1,n1=0,n2=1,n;

    cout<<"Enter n'th term in fabanacci series : ";
    cin>>n;



    for(i=2;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;

    }

    cout<<"\n output is "<<n3;



    return 0;
}
