#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream r;
    r.open("text.txt");
    r<<"\n Welcome "<<endl<<endl;
    r<<"\n To Prakash Industry"<<endl<<endl;
    r.close();
    cout<<"Success!!";
    return 0;
}
