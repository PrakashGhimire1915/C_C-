#include <iostream>
using namespace std;
class shape{
public:
    void display();
    void show();
    void getdata(int,int);
    void area();
private:
    int L,B;
    };
void shape:: display(){
cout<<"i m display function";
}
void shape:: show(){
cout<<"i m show function";
}
void shape:: getdata(int a,int b){
L=a;
B=b;
}
void shape::area(){
cout<<"area="<<L*B;
}
int main()
{
   shape sp;
   sp.display();
   sp.show();
   sp.getdata(3,2);
   sp.area();
    return 0;
}
