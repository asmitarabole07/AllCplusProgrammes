#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<string,int>data;

    map<string,int>::iterator it;


    data["Asmit"]=92;
    data["Ramu"]=85;
    data["Vinu"]=49;

    //map<string,int>::iterator it1;
    //it1=data.find("Asmit");
    //data.erase(it1);
    //data.clear();

    for(it=data.begin();it!=data.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

   /* for(it=data.begin();it!=data.end();it++)
    {
        if(data.count("Asmit")>0)
        cout<<"Asmit is there in list";
        else
            cout<<"Not there";
            break;
    }*/

    return 0;
}
