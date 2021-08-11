#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec1;
    int element,size;

    cout<<"Enter size of vector : ";
    cin>>size;
    cout<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<" in vector : ";
        cin>>element;
        vec1.push_back(element);
    }

    cout<<"\nElements in vector are : ";
    for(int i=0;i<size;i++)
    {
        cout<<vec1[i]<<" ";
    }

    return 0;
}
