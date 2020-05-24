#include <iostream>

using namespace std;
class shape{
public:
    void getdataR(int a, int b)
    {
    L=a;
    B=b;
    }
    void getdataT(int x,int y)
    {
    B=x;
    H=y;
    }
protected:
    int L,B,H;
};
class rectangle:public shape{
public:
    void area(){
    cout<<"area of rec="<<L*B<<endl;
    }
    };
    class triangle:public shape{
public:
    void area(){
    cout<<"area of triangle="<<((B*H)/2);
    }
    };

int main()
{
   rectangle rec;
   triangle tri;
   rec.getdataR(2,3);
   rec.area();
   tri.getdataT(4,8);
   tri.area();
    return 0;
}
