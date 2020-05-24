#include <iostream>

using namespace std;
class test{
public:
    virtual void display()=0;
    };
    class exam:public test{
public:
    void result(){
    cout<<"i m child class result function";
    }
    void display(){
    cout<<"i m child class display function";
    }
    };

int main()
{
   exam er;
   er.result();
   er.display();
    return 0;
}
