#include <iostream>

using namespace std;
class test
{
    int a,b;
public:
    test()
    {
        a=5;
        b=6;
    }
    void display()
    {
        cout<<"\n a="<<a<<"\n b="<<b<<endl;
    }
void operator --()
{
    --a;
    --b;
    }
};
int main()
{
    test t;
    t.display();
    --t;
    t.display();
    return 0;
}
