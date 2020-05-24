#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[200];
    ifstream r;
    r.open("text.txt");
    while(!r.eof())
    {
        r.getline(str,150);
        cout<<"\n "<<str;
    }
    r.close();
    return 0;
}
