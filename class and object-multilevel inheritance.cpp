#include <iostream>

using namespace std;

class student{
    int roll_no;
  public:
      void setroll_no(int a)
      {
          roll_no=a;
      }
      int getroll_no()
      {
          return roll_no;
      }
};

class marks:public student{

public:
    int physics;
    int maths;
    void setmarks(int b,int c)
    {
        physics=b;
        maths=c;
    }

};

class result:public marks{
public:
    void display()
    {
       cout<<"The result of roll no :"<<getroll_no()<<endl;
       cout<<"Following are the marks : physics "<<physics<<" and maths "<<maths<<endl;
       cout<<"The percentage is "<<(physics+maths)/2<<"%"<<endl;
    }


};

int main()
{
    result a;
    a.setroll_no(7);
    a.setmarks(90,95);
    a.display();

    return 0;
}
