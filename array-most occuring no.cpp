#include <iostream>

using namespace std;

int main()
{
    int n,num;
    cout<<"Enter size of array : ";
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter value "<<i+1<<" : ";
        cin>>array[i];

    }

    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(array[i]==array[j])
           {
               count++;
           }
       }


       if(count>=maxcount)
       {
           maxcount=count;
           num=array[i];
       }
       //cout<<array[i]<<" : "<<count<<endl;
       count=0;
    }

    cout<<"Most occuring number is : "<<num<<" and repetations are "<<maxcount;
}
