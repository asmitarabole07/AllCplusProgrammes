#include <iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
list<int>::iterator it;

    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<< " ";
    }
}

int main()
{
    list<int> link1;
    int element;
    cout<<"Enter values in list : 1"<<endl;
    for(int i=0;i<3;i++)
        {
            cout<<"Enter value "<<i+1<<" : ";
            cin>>element;
            link1.push_back(element);
        }

        list<int> link2;
    int element1;
    cout<<"\nEnter values in list : 2"<<endl;
    for(int i=0;i<3;i++)
        {
            cout<<"Enter value "<<i+1<<" : ";
            cin>>element1;
            link2.push_back(element1);
        }

        //link2.merge(link1);
        //link2.sort();
        //link1.sort();
        //link1.reverse();
        //link1.unique();
        //link1.remove(2);

        cout<<"\nValues in list 1 are : ";
        display(link1);
        cout<<"\nValues in list 2 are : ";
        display(link2);
        //link1.sort();
        //list<int>::iterator point;
        //point=link1.begin();
        //cout<<*point++<<" ";
        //cout<<*point++<<" ";
        //cout<<*point;


    return 0;
}
