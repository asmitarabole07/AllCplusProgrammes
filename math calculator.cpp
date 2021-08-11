#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n1,n2;

    cout<<"Enter first number : ";
    cin>>n1;

    cout<<"Enter second number : ";
    cin>>n2;

    cout<<"\n\nAddition is : "<<n1+n2<<endl;
    cout<<"Substraction is : "<<n1-n2<<endl;
    cout<<"Division is : "<<n1/n2<<endl;
    cout<<"Multiplication is : "<<n1*n2<<endl;
    cout<<"larger is : "<<fmax(n1,n2)<<endl; //max no
    cout<<"Smaller is : "<<fmin(n1,n2)<<endl;
    cout<<"Modulus is : "<<n1%n2<<endl; //min no

    return 0;
}
