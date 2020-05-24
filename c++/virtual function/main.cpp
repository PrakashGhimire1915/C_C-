#include <iostream>

using namespace std;
class parent{
public:
    void display(){
    cout<<"I m in a parent class function display"<<endl;
    }
    virtual void show(){
    cout<<"I m in parent class function show"<<endl;
    }
};
class child:public parent{
public:
    void display(){
    cout<<"I m in child class function display"<<endl;
    }
    void show(){
    cout<<"I m in child class function show"<<endl;
    }
    };
int main()
{
    parent *p;
    parent pp;
child ch;
p=&ch;
p->display();
p->show();
p=&pp;
p->display();
p->show();

return 0;
}
