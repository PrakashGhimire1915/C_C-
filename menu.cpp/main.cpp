#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int ch;
    cout<<"1.ADD \n2.SUBTRACT"<<endl;

    do{
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        cout<<"Enter any two number:"<<endl;
        cin>>a>>b;
        switch(ch)
        {
        case 1:
            cout<<"The Sum is:"<<a+b<<endl;
            break;
        case 2:
            cout<<"The difference is:"<<a-b<<endl;
            break;
        default:
            cout<<"Invalid choice";
        }
    }while(ch<=1);

    return 0;
}
