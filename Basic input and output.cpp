#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    string name;
    char grade;
    int year;

    cout<<"Enter Name : ";
    getline(cin,name);

    cout<<"hey "<<name<<" Enter your grade : ";
    cin>>grade;

    cout<<"hey "<<name<<" Enter passing year : ";
    cin>>year;

    cout<<endl;

    cout<<name<<" you are passed with grade "<<grade<<" in "<<year<<endl;
    return 0;
}
