#include <iostream>

using namespace std;
class circle{
public:
    void getdata(int r){
    rad=r;
    }
    void area(){
    cout<<"area of circle"<<pi*rad*rad;
    }
    circle(){
    pi=3.14;
    }
private:
    float pi;
    int r;
    int rad;
};
class rectangle{
public:
    void getdata(int a,int b)
    {
    L=a;
    B=b;
    }
    void area(){
    cout<<"area of rectangle"<<L*B;}
private:
    int L;
    int B;
    };
    class triangle{
public:
        void getdata(int b,int h){
        A=b;
        B=h;
    }
    void area()
    {
    cout<<"area of triangle"<<((A*B)/2);
    }
private:
        int A;
        int B;
    };


int main()
{
    circle cr;
    rectangle rec;
    triangle t;
    int a,b,r;
    int h;
    cout<<"enter radius\n";
    cin>>r;
    cr.getdata(r);
    cr.area();
    cout<<"enter the length and breadth\n";
    cin>>a>>b;
    rec.getdata(a,b);
    rec.area();
    cout<<"enter the breadth and height\n";
    cin>>b>>h;
    t.getdata(b,h);
    t.area();
    return 0;
}
