#include <iostream>

using namespace std;
class test {
public:
    test(){
    cout<<"i am a default constructor\n";
    }
    test(int a)
    {
        cout<<"i have one argument\n"<<a;
    }

    test(int x,int y)
    {
        cout<<"i have two argument\n"<<x<<"and"<<y;
    }
};

int main()
{
  test t1;
  test t2(3);
  test t3(9,4);
  return 0;

}
