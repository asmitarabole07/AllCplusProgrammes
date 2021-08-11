#include <iostream>

using namespace std;
class surname;

class name{
    string name1;
    friend void fullname(name,surname);
public:
    void input(string a)
    {
        name1=a;
    }
};

class surname{
    string surname1;
    friend void fullname(name,surname);
public:
    void input(string b)
    {
        surname1=b;
    }
};

void fullname(name n1,surname s1)
{
    cout<<"My full name is "<<n1.name1<<" "<<s1.surname1<<endl;
}

int main()
{
    name n1;
    n1.input("Asmit");
    surname s1;
    s1.input("Arabole");

    fullname(n1,s1);
    return 0;
}
