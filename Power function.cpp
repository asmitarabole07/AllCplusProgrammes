#include <iostream>

using namespace std;

expo(int n1,int n2)
{
    int i,result=1;
    for(i=1;i<=n2;i++)
    {
        result=result*n1;
    }

    cout<<"\nAnswer is : "<<result<<endl;
}

int main()
{
    int n1,n2;

    cout << "Enter base value : ";
    cin>>n1;
    cout << "\nEnter exponenet value : ";
    cin>>n2;

    expo(n1,n2);

    return 0;
}
