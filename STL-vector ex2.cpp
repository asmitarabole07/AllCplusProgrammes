#include <iostream>

#include<vector>

using namespace std;


int main()
{
    vector<int> vec1(4,23);



   /* string element;

    for(int i=0;i<4;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>element;
        vec1.push_back(element);

    }

vector<string>::iterator iter=vec1.begin();
vec1.insert(iter+1,2,"start");*/

    cout<<"\nVector elements are"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<vec1[i]<<" ";
        //cout<<vec1.at(i)<<" ";
    }
    return 0;
}
