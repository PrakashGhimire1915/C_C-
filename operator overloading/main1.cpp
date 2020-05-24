#include<iostream>
using namespace std;

class expense
{
    int rent,fee;
public:
    expense()
    {
        rent=0;
        fee=0;
    }
    expense(int r,int f)
    {
        rent=r;
        fee=f;
    }
    expense operator +(expense e)
    {
        expense e2;
        e2.rent=rent+e.rent;
        e2.fee=fee+e.fee;
        return e2;
    }
    void display()
    {
        cout<<"Rent="<<rent<<endl<<"Fee="<<fee<<endl;
    }
};


int main()
{
    expense jan(500,100),feb(500,100),total;
    jan.display();
    feb.display();
    total=jan+feb;
    total.display();
    return 0;
}
