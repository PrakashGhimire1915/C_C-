#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int i,l,m[5];
    char nam[5][20],add[5][20];

    for(i=0; i<5; i++)
    {
       cout<<"Enter names:"<<endl;
       cin.getline(nam[i],50);
        cout<<"Enter address:"<<endl;
        cin.getline(add[i],50);
    }
    cout<<"\t"<<"Name"<<setw(30)<<"Address"<<endl;
    cout<<"\t"<<"............................."<<endl;

    for(i=0; i<5; i++)
    {
        l=strlen(nam[i]);
        cout<<"\t"<<nam[i]<<setw(34-l)<<add[i]<<endl;
    }

    return 0;
}
