#include <iostream>

using namespace std;
class parent{
public:
    void display(){
    cout<<"i m in a parent class";
    }
};
class child:public parent{
public:
    void display(){
    cout<<"i m in a child class";
    }
    };

int main()
{
    parent *p;
child ch;
p=&ch;
p->display();
parent pp;
p=&pp;
p->display();
    return 0;
}
