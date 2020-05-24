#include <iostream>

using namespace std;
class test {
public:
    test (){
    pi=3.14;}
    void area(){
    cout<<"area"<<pi*rad*rad;
    }
    void getrad(float r){
    rad=r;}
private:
    float pi;
    float rad;
    };
int main()
{
    test t;
    float r;
    cout << "enter radius";
    cin>>r;
    t.getrad(r);
    t.area();
    return 0;
}
