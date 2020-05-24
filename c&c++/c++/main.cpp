#include <iostream>

using namespace std;
class rectangle {
public:
    void getData(int a,int b)
    {
    length=a;
    breadth=b;
    }
    int area(){
    return length*breadth;
    }
private:
    int length;
    int breadth;
};

int main()
{
    rectangle rec;
  int x,y;
  cout << "enter any two number\n";
  cin>>x>>y;
  rec.getData(x,y);
  cout<<rec.area();
    return 0;
}
