#include <iostream>

using namespace std;

int main()
{
    int n=7;
    int n1,i;

    cout<<"You have 3 attempts to guess number\n";
    cout<<"Guess number between 1 to 10 : ";
    cin>>n1;


        if(n1==n)
        {
            cout<<"\nHey congratulations...!!! your number guess is correct\n\n\n\n\n";
        }
        else
        {
             for(i=1;i<3;i++)
            {
            cout<<"\nPlease try again:attempt "<<i+1<<endl;
            cout<<"Guess number between 1 to 10 : ";
            cin>>n1;
                if(n1==n)
                {
                    cout<<"\nHey congratulations...!!! your number guess is correct\n\n\n\n\n";
                }

            }
            if(n1!=n)
                {
                    cout<<"\n\nYour all 3 guess attempts are wrong\n\n\n\n\n\n";
                }

        }

}








